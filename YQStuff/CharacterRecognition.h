#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <regex>
//#include "main.cpp"

using namespace std;

struct Node{
    vector<double> weight;
    vector<double> dWeight;
    vector<Node> prevNodeLayer;
    double bias;
    double dBias;

    double weightSum;
    double activationValue;
    double dSum;
    double dActivation;

    Node(){
        bias = 0;
        dBias = 0;
        weightSum = 0;
        activationValue = 0;
        dSum = 0;
        dActivation = 0;
        weight = vector<double>(0);
        dWeight = vector<double>(0);
    }
    Node(vector<double> weight, double bias){
        this->weight = weight;
        this->bias = bias;

        prevNodeLayer = vector<Node>(0);
        dWeight = vector<double>(weight.size());
        dBias = 0;
        weightSum = 0;
        activationValue = 0;
        dSum = 0;
        dActivation = 0;
    }
    Node(vector<double> weight, double bias, vector<Node> &prevNodeLayer){ //: Node(weight, bias){
        //if (weight.size() == prevNodeLayer.size()) {
        this->prevNodeLayer = prevNodeLayer;
        this->weight = weight;
        this->bias = bias;

        prevNodeLayer = vector<Node>(0);
        dWeight = vector<double>(weight.size());
        dBias = 0;
        weightSum = 0;
        activationValue = 0;
        dSum = 0;
        dActivation = 0;
        //}
//        else{
//            exit(69420);
//        }
    }
    Node(double activationValue) {
        this->activationValue = activationValue;

        bias = 0;
        dBias = 0;
        weightSum = 0;
        dSum = 0;
        dActivation = 0;
        weight = vector<double>(0);
        dWeight = vector<double>(0);
    }


};

class CharacterRecognition{
public:
    CharacterRecognition(){
        loadInput = false;
        activate = false;
        derivative = false;
    }
private:
    vector<vector<Node>> network;
    bool loadInput;
    bool activate;
    bool derivative;
    vector<char> outputRepresentation{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '-', '*', '/', '(', ')'};



    void calc(){
        if (activate){
            exit(69420);
            return;
        }
        for (int layerCnt = 1; layerCnt < network.size(); layerCnt++){
            vector<Node> layer = network[layerCnt];
            for (int nodeCnt = 0; nodeCnt < layer.size(); nodeCnt++){
                Node node = layer[nodeCnt];
                vector<double> weightList = node.weight;
                vector<Node> prevNodeLayer = node.prevNodeLayer;
                double val = node.bias;
                for (int weightCnt = 0; weightCnt < weightList.size(); weightCnt++){
                    val += weightList[weightCnt] * prevNodeLayer[weightCnt].activationValue;
                }
                node.weightSum = val;
                node.activationValue = sigmoid(val);
            }

        }
        activate = true;
    }

    void calcDerivative(char target){
        vector<Node> outputLayer = network.back();
        if (!activate || derivative || outputLayer.size() != outputRepresentation.size()){
            exit(69420);
            return;
        }
        for (int nodeCnt = 0; nodeCnt < outputLayer.size(); nodeCnt++){
            Node node = outputLayer[nodeCnt];
            //double dActivation;
            if (outputRepresentation[nodeCnt] == target){
                node.dActivation = 2 * (node.activationValue - 1);
                //node.dSum = sigmoid_derivative(dActivation);
            }
            else{
                node.dActivation = 2 * (node.activationValue);
                //node.dSum = sigmoid_derivative(dActivation);
            }
        }

        for (int layerCnt = network.size() - 1; layerCnt > 0; layerCnt--){
            vector<Node> layer = network[layerCnt];
            for (int nodeCnt = 0; nodeCnt < layer.size(); nodeCnt++){
                Node node = layer[nodeCnt];
                node.dSum = sigmoid_derivative(node.weightSum) * node.dActivation;
                for (int weightCnt = 0; weightCnt < node.weight.size(); weightCnt++){
                    node.dWeight[weightCnt] = node.prevNodeLayer[weightCnt].activationValue * node.dSum;
                    node.prevNodeLayer[weightCnt].dActivation += node.weight[weightCnt] * node.dSum;
                }
                node.dBias = node.dSum;
            }
        }
    }

    void backPropagation(double amt){
        for (int layerCnt = 1; layerCnt < network.size(); layerCnt++){
            vector<Node> layer = network[layerCnt];
            for (int nodeCnt = 0; nodeCnt < layer.size(); nodeCnt++){
                Node node = layer[nodeCnt];
                for (int weightCnt = 0; weightCnt < node.weight.size(); weightCnt++){
                    node.weight[weightCnt] -= node.dWeight[weightCnt] * amt;
                }
                node.bias -= node.dBias * amt;
            }
        }
    }

    double cost(char target){
        vector<Node> outputLayer = network.back();
        if (!activate || outputLayer.size() != outputRepresentation.size()){
            exit(69420);
            return 0;
        }
        double totalCost = 0;
        for (int nodeCnt = 0; nodeCnt < outputLayer.size(); nodeCnt++){
            if (outputRepresentation[nodeCnt] == target){
                totalCost += pow((1 - outputLayer[nodeCnt].activationValue), 2);
            }
            else{
                totalCost += pow((outputLayer[nodeCnt].activationValue), 2);
            }
        }

        return totalCost / outputLayer.size();
    }



    double relu(double val){
        return (val > 0) ? val : 0;
    }

    double sigmoid(double val){
        return 1.0 / (1 + exp(-val));
    }

    double sigmoid_derivative(double val){
        return pow((1 + exp(val)), 2) * exp(val);
    }
public:
    double parseDouble(string str){
        long long num = 0;
        int pol = 1;
        bool decimalPoint = false;
        int digitAftPoint = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '-') {
                pol *= -1;
            }
            else if ('0' <= str[i] && str[i] <= '9') {
                num *= 10;
                num += str[i] - '0';
//                printf("num: %d, %d\n", num, str[i]-'0');
            }
            else if (str[i] == '.') {
                decimalPoint = true;
                digitAftPoint--;
            }

            if (decimalPoint){
                digitAftPoint++;
            }
        }
        return pol * num / (double)pow(10, digitAftPoint);
    }

public:
    void readFile(string filename){
        if (loadInput){
            exit(69420);
            return;
        }
        //FILE *weightFile = fopen("Weight.txt", "r+");
        fstream weightFileIn;
        weightFileIn.open(filename, ios::in);
        string layerWeightStr;
        int lineNo = 0;
        while (getline(weightFileIn, layerWeightStr)){
            layerWeightStr = layerWeightStr.substr(1, layerWeightStr.size()-2);
            lineNo++;
            vector<Node> layer = vector<Node>(0);
            int startNo = 0, len = 0;
            for (int charNo = 0; charNo < layerWeightStr.size(); charNo++){
                if (layerWeightStr[charNo] == '{'){
                    startNo = charNo + 1;
                }
                else if (layerWeightStr[charNo] == '}'){
                    len = charNo - startNo;
                    string nodeWeightStr = layerWeightStr.substr(startNo, len);//endNo);
                    cout << nodeWeightStr << "     ";
                    regex rgx(", ");
                    sregex_token_iterator iter(nodeWeightStr.begin(), nodeWeightStr.end(), rgx, -1);
                    sregex_token_iterator end;
                    for ( ; iter != end; iter++){

                    }
                }
            }
//            cout << layerWeightStr << endl;
        }

        weightFileIn.close();
    }

    void writeFile(string filename) {
        //vector<Node> temp = vector<Node>(0);
//        vector<double> tmp1 = vector<double>(2400, 0.1);
//        Node tmp(tmp1, 0.1);
        network = vector<vector<Node>>(2, vector<Node>(16, Node(vector<double>(2400, 0.1), 0.1)));
        /*
        vector<vector<vector<double>>> networkWeightList{{{420, 1}, {69, 2}}};
        network = vector<vector<Node>>(networkWeightList.size() + 1);
        network[0] = vector<Node>(65 * 39);
        for (int i = 0; i < networkWeightList.size(); i++) {
            vector<vector<double>> layerWeightList = networkWeightList[i];
            network[i + 1] = vector<Node>(layerWeightList.size());
            for (int j = 0; j < layerWeightList.size(); j++) {
                vector<double> nodeWeightList = layerWeightList[j];
                double bias = nodeWeightList.back();
                nodeWeightList.pop_back();
                Node node(nodeWeightList, bias, network[i]);
                network[i + 1][j] = node;
            }
        }/**/


        fstream weightFileOut;
        weightFileOut.open(filename, ios::out);
        //weightFileOut << '{';
        for (int layerCnt = 1; layerCnt < network.size(); layerCnt++) {

            vector<Node> layer = network[layerCnt];
            weightFileOut << '{';
            for (int nodeCnt = 0; nodeCnt < layer.size(); nodeCnt++) {
                Node node = layer[nodeCnt];
                weightFileOut << '{';
                for (int weightCnt = 0; weightCnt < node.weight.size(); weightCnt++) {
                    weightFileOut << fixed << setprecision(7) << node.weight[weightCnt];
                    printf("weight: %.8f\n", node.weight[weightCnt]);
//                    if (weightCnt != node.weight.size() - 1) {
                    weightFileOut << ", ";
//                    }
                }
                weightFileOut << fixed << setprecision(7) << node.bias;
                printf("bias: %.8f\n", node.bias);
                weightFileOut << '}';
                if (nodeCnt != layer.size() - 1) {
                    weightFileOut << ", ";
                }
            }
            weightFileOut << '}';
            if (layerCnt != network.size() - 1) {
                weightFileOut << "\n"; //<< ", ";
            }
        }
        //weightFileOut << '}';

        weightFileOut.close();
    }

    void loadInputLayer(vector<double> inputValue){
        vector<Node> inputLayer;
        if (inputValue.size() != 60 * 40){
            exit(69420);
            return;
        }
        for (int i = 0; i < inputValue.size(); i++){
            inputLayer.push_back(Node(inputValue[i]));
        }
        network.push_back(inputLayer);
        loadInput = true;
    }




};
/*
int main(){
    CharacterRecognition cr;
//    cr.readFile("Weight.txt");
    cr.writeFile("Weight.txt");
    return 0;
}
 /**/