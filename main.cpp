#include<bits/stdc++.h>
#include<algorithm>
#include <unistd.h>

char font[][66][39]=
{
    {"",
    "...........########",
    ".........############",
    ".......################",
    "......##################",
    ".....####################",
    "....######################",
    "...########################",
    "...##########....##########",
    "..#########........#########",
    "..########..........########",
    ".#########..........#########",
    ".########............########",
    ".########............########",
    ".########............########",
    "########..............########",
    "########..............########",
    "########..............########",
    "########..............########",
    "########..............########",
    "########..............########",
    "########..............########",
    "########..............########",
    "########..............########",
    "########..............########",
    "########..............########",
    ".########............########",
    ".########............########",
    ".########............########",
    ".#########..........#########",
    "..########..........########",
    "..#########........#########",
    "...##########....##########",
    "...########################",
    "....######################",
    ".....####################",
    "......##################",
    ".......################",
    ".........############",
    "...........########"},
 
    {"",
    ".............####",
    "...........#######",
    "........##########",
    ".....#############",
    "..################",
    ".#################",
    ".#################",
    ".#################",
    ".#################",
    "..######..########",
    "..###.....########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    "..........########",
    ".##########################",
    "###########################",
    "###########################",
    "###########################",
    "###########################",
    ".##########################"},
 
    {"",
    ".........#########",
    "......##############",
    "...###################",
    "..#####################",
    ".#######################",
    ".#######################",
    ".########################",
    ".#########......#########",
    ".#######.........#########",
    ".#######..........########",
    ".#######..........########",
    ".#######..........########",
    ".#######..........########",
    "..######..........########",
    ".................#########",
    ".................########",
    "................#########",
    "...............##########",
    "..............##########",
    ".............###########",
    "............###########",
    "...........###########",
    "..........###########",
    ".........###########",
    "........###########",
    ".......###########",
    "......###########.....#####",
    ".....###########.....#######",
    "....###########......#######",
    "...###########.......#######",
    "..###########........#######",
    ".###########.........#######",
    "############################",
    "############################",
    "############################",
    "############################",
    "############################",
    ".###########################"},
 
    {"",
    ".........##########",
    ".....################",
    "...####################",
    "..######################",
    "..#######################",
    "..########################",
    "..########################",
    "..########.......##########",
    "..#######.........#########",
    "..#######..........########",
    "..#######..........########",
    "...######..........########",
    "...................########",
    "...................########",
    "..................########",
    ".................#########",
    "..........###############",
    ".........###############",
    ".........##############",
    ".........###############",
    ".........################",
    "..........################",
    ".................##########",
    "...................########",
    "...................#########",
    "....................########",
    "....................########",
    "....................########",
    "....................########",
    "...................#########",
    "..###.............##########",
    ".########........##########",
    ".##########################",
    ".#########################",
    "##########################",
    ".########################",
    ".######################",
    "....#################",
    ".......###########"},
 
    {"",
    ".................#####",
    "................#######",
    "...............########",
    "..............#########",
    ".............##########",
    "............###########",
    "............###########",
    "...........############",
    "..........#############",
    ".........##############",
    "........###############",
    ".......################",
    ".......########.#######",
    "......########..#######",
    ".....########...#######",
    "....########....#######",
    "...#########....#######",
    "...########.....#######",
    "..########......#######",
    ".########.......#######",
    "##############################",
    "##############################",
    "##############################",
    "##############################",
    "##############################",
    "##############################",
    "...............########",
    "...............########",
    "...............########",
    "...............########",
    "...............########",
    "...............########",
    ".........####################",
    "........#####################",
    "........#####################",
    "........#####################",
    "........#####################",
    ".........####################"},
 
    {"",
    "...######################",
    "...#######################",
    "...#######################",
    "...#######################",
    "...#######################",
    "...######################",
    "...#######",
    "...#######",
    "...#######",
    "...#######",
    "...#######",
    "...#######",
    "..########..########",
    "..####################",
    "..######################",
    "..#######################",
    "..########################",
    "..########################",
    "..#########################",
    "..########.......##########",
    ".....##...........#########",
    "...................#########",
    "....................########",
    "....................########",
    "....................########",
    "....................########",
    "....................########",
    "....................########",
    "...#...............#########",
    "..####............#########",
    ".########.......###########",
    ".##########################",
    ".#########################",
    "#########################",
    ".#######################",
    "..#####################",
    "....#################",
    "........##########"},
 
    {"",
    "....................######",
    "...............###########",
    "............###############",
    "..........#################",
    "........###################",
    ".......####################",
    "......####################",
    ".....################",
    "....############",
    "...###########",
    "...#########",
    "..#########",
    "..########",
    ".########",
    ".########",
    ".#######....########",
    ".#######..#############",
    "#########################",
    "##########################",
    "###########################",
    "###########################",
    "############......##########",
    "##########.........#########",
    "#########...........#########",
    "########.............########",
    "########.............########",
    "########.............########",
    ".#######.............########",
    ".#######.............########",
    ".########...........#########",
    ".#########.........#########",
    "..##########.....###########",
    "...#########################",
    "...########################",
    "....######################",
    ".....####################",
    "......##################",
    "........##############",
    "...........########"},
 
    {"",
    "###########################",
    "############################",
    "############################",
    "############################",
    "############################",
    "###########################",
    "#######...........#########",
    "#######...........#########",
    "#######..........#########",
    "#######..........#########",
    "#######..........########",
    "#######.........#########",
    "#######.........########",
    "#######........#########",
    ".#####.........#########",
    "...............########",
    "..............#########",
    "..............########",
    ".............#########",
    ".............########",
    "............#########",
    "............#########",
    "............########",
    "...........#########",
    "...........########",
    "..........#########",
    "..........########",
    "..........########",
    ".........########",
    ".........########",
    "........#########",
    "........########",
    "........########",
    ".......########",
    ".......########",
    ".......#######",
    ".......#######",
    ".........#####"},
 
    {"",
    "..........#########",
    "........#############",
    "......#################",
    ".....###################",
    "....#####################",
    "...#######################",
    "...#######################",
    "...#########.....#########",
    "..#########.......#########",
    "..########.........########",
    "..########.........########",
    "..########.........########",
    "..########.........########",
    "..########.........########",
    "...########.......########",
    "...#########.....#########",
    "....#####################",
    ".....###################",
    "......#################",
    "......#################",
    "....#####################",
    "...#######################",
    "..#########......##########",
    ".########..........########",
    ".########..........#########",
    "########............########",
    "########............########",
    "########............########",
    "########............########",
    "#########..........#########",
    "#########..........#########",
    ".##########......##########",
    ".##########################",
    "..########################",
    "..########################",
    "...######################",
    "....####################",
    "......################",
    ".........##########"},
 
    {"",
    ".........#########",
    ".......#############",
    ".....#################",
    "....###################",
    "...#####################",
    "..#######################",
    ".########################",
    ".##########......#########",
    ".#########........#########",
    "#########..........########",
    "########............#######",
    "########............#######",
    "########............########",
    "########............########",
    "########............########",
    "#########..........#########",
    ".########.........##########",
    ".##########......###########",
    "..##########################",
    "..##########################",
    "...#########################",
    "....########################",
    "......############..########",
    "........########....#######",
    "....................#######",
    "...................########",
    "...................########",
    "..................########",
    ".................#########",
    "...............##########",
    ".............############",
    ".........###############",
    "....###################",
    "...###################",
    "...##################",
    "...################",
    "...##############",
    "...############",
    "....######"},
 
    {"",
    "..####",
    ".######",
    "#########",
    "##########",
    "###########",
    "############",
    ".############",
    "...###########",
    "....###########",
    ".....##########",
    "......##########",
    ".......##########",
    "........#########",
    ".........#########",
    "..........########",
    "..........#########",
    "...........########",
    "...........#########",
    "............########",
    "............########",
    "............########",
    "............#########",
    ".............########",
    ".............########",
    ".............########",
    ".............########",
    ".............########",
    ".............########",
    ".............########",
    ".............########",
    ".............########",
    ".............########",
    "............########",
    "............########",
    "............########",
    "...........#########",
    "...........########",
    "..........#########",
    "..........#########",
    ".........#########",
    "........##########",
    ".......##########",
    ".......#########",
    ".....###########",
    "....###########",
    "...###########",
    "..###########",
    "############",
    "###########",
    "##########",
    "#########",
    ".#######",
    "..####",
    "...#"},
 
    {"",
    "......................####",
    "......................######",
    ".....................#######",
    ".....................#######",
    "....................########",
    "....................#######",
    "...................########",
    "...................#######",
    "..................########",
    "..................#######",
    ".................########",
    ".................#######",
    "................########",
    "................########",
    "................#######",
    "...............########",
    "...............#######",
    "..............########",
    "..............#######",
    ".............########",
    ".............#######",
    "............########",
    "............#######",
    "...........########",
    "...........#######",
    "..........########",
    "..........#######",
    "..........#######",
    ".........########",
    ".........#######",
    "........########",
    "........#######",
    ".......########",
    ".......#######",
    "......########",
    "......#######",
    ".....########",
    ".....#######",
    "....########",
    "....#######",
    "...########",
    "...########",
    "...#######",
    "..########",
    "..#######",
    ".########",
    ".#######",
    "########",
    "#######",
    ".######",
    "..#####"},
 
    {"",
    ".##########################",
    "############################",
    "############################",
    "############################",
    "############################",
    "############################",
    ".###########################"},
 
    {"",
    "...............####",
    "..............######",
    "............########",
    "...........##########",
    "..........###########",
    ".........############",
    "........############",
    ".......###########",
    "......###########",
    ".....###########",
    ".....##########",
    "....##########",
    "....#########",
    "...#########",
    "...########",
    "..#########",
    "..########",
    ".#########",
    ".########",
    ".########",
    ".########",
    "#########",
    "########",
    "########",
    "########",
    "########",
    "########",
    "########",
    "########",
    "########",
    "########",
    "########",
    ".########",
    ".########",
    ".########",
    ".#########",
    "..########",
    "..#########",
    "..#########",
    "...#########",
    "...##########",
    "....#########",
    ".....#########",
    ".....##########",
    "......###########",
    ".......###########",
    "........###########",
    ".........############",
    "..........###########",
    "...........##########",
    "............#########",
    ".............#######",
    "...............####",
    ".................#"},
 
    {"",
    "...........#####",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "###########################",
    "###########################",
    "###########################",
    "###########################",
    "###########################",
    "###########################",
    "###########################",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "..........#######",
    "...........#####"},
 
    {"",
    "...........####",
    "..........######",
    "..........#######",
    ".........########",
    ".........########",
    "..........#######",
    "..........######",
    ".#####....######.....####",
    ".######...######...#######",
    "#########..#####.#########",
    "###############.##########",
    "##########################",
    "##########################",
    ".########################",
    "......##############",
    ".........########",
    "........###########",
    ".......#############",
    ".....########.#######",
    "....########..########",
    "....########..#########",
    "...########....########",
    "...########....########",
    "....#######.....#######",
    ".....#####......######",
    "......###.........##"}
};

using namespace std;
const int MAX_HEIGHT = 65, MAX_WIDTH = 10000, CHAR_MIN_SIZE = 100,
INF = 0x3f3f3f3f, EXPR_LEN = 300;
const double pi = acos(-1);
int vis[MAX_HEIGHT][MAX_WIDTH];
char charRepresentation[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ')', '/', '-', '(', '+', '*'};

struct Image{
    int w, h;
    vector<vector<int>> pixels;
    Image(){}
    Image(int h, int w){
        this->h = h;
        this->w = w;
        pixels = vector<vector<int>>(h, vector<int>(w, 0));
        for (int row = 0; row < h; row++){
            for (int col = 0; col < w; col++){
                pixels[row][col] = 0;
            }
        }
    }
    Image(Image const &image){
        h = image.h;
        w = image.w;
        pixels = vector<vector<int>>(h, vector<int>(w));
        for (int row = 0; row < h; row++){
            for (int col = 0; col < w; col++){
                pixels[row][col] = image.pixels[row][col];
            }
        }
    }
    bool inRange(int row, int col){
        if (0 <= row && row < h && 0 <= col && col <= w){
            return true;
        }
        else{
            return false;
        }
    }
};

void initBound(int &xMin, int &xMax, int &yMin, int &yMax, Image image);
Image connectedPixels(int x, int y, Image &image);
Image fontImage[16];
vector<vector<Image>> randomisedFontImage = vector<vector<Image>>(16);

Image readImg(){
    int t, w, h;
    scanf("%d", &t);
    scanf("%d %d", &w, &h);
    Image image(h, w);
    for (int row = 0; row < h; row++){
        char str[MAX_WIDTH];
        scanf("%s", &str);
        for (int col = 0; col < w; col++) {
            if (str[col] == '.') image.pixels[row][col] = 0;
            else if (str[col] == '#') image.pixels[row][col] = 1;
        }
    }

    return image;
}

void printImg(Image image){
    for (int row = 0; row < image.h; row++){
        for (int col = 0; col < image.w; col++){
            printf("%c", image.pixels[row][col] ? '#' : '.');
        }
        printf("\n");
    }
}

void rmvNoise(Image &image){
    Image tmpImage(image);
    int dx[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1},
        dy[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    for (int row = 0; row < image.h; row++){
        for (int col = 0; col < image.w; col++){

            int cnt = 0, totalCnt = 0;
            for (int i = 0; i < 9; i++){
                int nx = row + dx[i], ny = col + dy[i];
                if (tmpImage.inRange(nx, ny)){
                    totalCnt++;
                    cnt += tmpImage.pixels[nx][ny];
                }
            }
            image.pixels[row][col] = (2*cnt > totalCnt);

        }
    }
}

Image stretchImg(Image image, int tarX, int tarY){
    Image tmp(tarX, tarY);
    for (int row = 0; row < tarX; row++){
        for (int col = 0; col < tarY; col++){
            tmp.pixels[row][col] = image.pixels[row*image.h/tarX][col*image.w/tarY];
        }
    }
    return tmp;
}

Image rotateImg(Image image, double ang){
    vector<pair<int, int>> pointList;
    int xMin = INF, xMax = -INF, yMin = INF, yMax = -INF;
    ang = ang * pi / 180;
    double sinAng = sin(ang), cosAng = cos(ang), xCen = image.h/2., yCen = image.w/2.;

    for (int row = 0; row < image.h; row++) {
        for (int col = 0; col < image.w; col++){
            if (image.pixels[row][col]) {
                double nx = (row - xCen) * cosAng + (col - yCen) * sinAng;
                double ny = (col - yCen) * cosAng - (row - xCen) * sinAng;

                int fx = round(xCen + nx), fy = round(yCen + ny);
                pointList.emplace_back(fx, fy);
                xMin = min(xMin, fx), xMax = max(xMax, fx);
                yMin = min(yMin, fy), yMax = max(yMax, fy);
            }
        }
    }

    Image tmp(xMax-xMin+1, yMax-yMin+1);
    for (pair<int, int> point: pointList){
        tmp.pixels[point.first - xMin][point.second - yMin] = 1;
    }
    return tmp;
}

Image cutImg(Image image, double cx, double cy){
    vector<pair<int, int>> pointList;
    int xMin = INF, xMax = -INF, yMin = INF, yMax = -INF;

    for (int row = 0; row < image.h; row++) {
        for (int col = 0; col < image.w; col++) {
            if (image.pixels[row][col]) {
                double nx = row + col * cy;
                double ny = col + row * cx;

                int fx = round(nx), fy = round(ny);
                pointList.emplace_back(fx, fy);
                xMin = min(xMin, fx), xMax = max(xMax, fx);
                yMin = min(yMin, fy), yMax = max(yMax, fy);
            }
        }
    }

    Image tmp(xMax-xMin+1, yMax-yMin+1);
    for (pair<int, int> point: pointList){
        tmp.pixels[point.first - xMin][point.second - yMin] = 1;
    }
    return tmp;
}

double matchImg(Image image1, Image image2){
    if (min(abs((double)image1.h/image1.w - image2.h/image2.w), abs((double)image1.w/image1.h - image2.w/image2.h)) > 0.4){
        return 0;
    }
    int reCnt = 0, xMin = min(image1.h, image2.h), yMin = min(image1.w, image2.w);
//    int reCnt = 0, xMin = max(image1.h, image2.h), yMin = max(image1.w, image2.w);
    image1 = stretchImg(image1, xMin, yMin);
    image2 = stretchImg(image2, xMin, yMin);
    for (int row = 0; row < xMin; row++){
        for (int col = 0; col < yMin; col++){
            reCnt += image1.pixels[row][col]==image2.pixels[row][col];
        }
    }
    return (double)reCnt/(xMin*yMin);
}

void readFontImg(){
    for (int charCnt = 0; charCnt < 16; charCnt++){
        Image image(66, 39);
        for (int row = 0; row < 66; row++){
            for (int col = 0; col < 39; col++){
                image.pixels[row][col] = font[charCnt][row][col] == '#' ? 1 : 0;
            }
        }
        bool bl = false;
        for (int row = 0; row < image.h; row++){
            for (int col = 0; col < image.w; col++){
                if (image.pixels[row][col]){
                    image = connectedPixels(row, col, image);
                    bl = true;
                    break;
                }
            }
            if (bl){
                break;
            }
        }
//        printImg(image);
//        printf("\n\n");
        fontImage[charCnt] = image;
    }
}

void generateFontImg(){
    for (int charCnt = 0; charCnt < 16; charCnt++){
        vector<Image> c;
        for (int r = -15; r < 16; r+=3){
            Image tmp = rotateImg(fontImage[charCnt], r);

//            printImg(tmp);
//            printf("\n\n");
            double num = 0.1;
            c.push_back(cutImg(tmp, -num, -num));
            c.push_back(cutImg(tmp, -num, num));
            c.push_back(cutImg(tmp, num, -num));
            c.push_back(cutImg(tmp, num, num));
            c.push_back(tmp);
        }
        for (int i = 0; i < c.size(); i++){
            rmvNoise(c[i]);
//            printImg(randomisedFontImage[charCnt][i]);
//            printf("\n\n");
        }
        randomisedFontImage[charCnt] = c;
    }
}

char recogniseChar(Image charImage){
    int charNo = 0;
    double max = 0;
    for (int charCnt = 0; charCnt < 16; charCnt++){
        for (int imageCnt = 0; imageCnt < randomisedFontImage[charCnt].size(); imageCnt++){
            if (matchImg(randomisedFontImage[charCnt][imageCnt], charImage) > max){
                max = matchImg(randomisedFontImage[charCnt][imageCnt], charImage);
                charNo = charCnt;
            }
        }
    }
    return charRepresentation[charNo];
}

void initBound(int &xMin, int &xMax, int &yMin, int &yMax, Image image){
    xMin = image.h;
    xMax = 0;
    yMin = image.w;
    yMax = 0;
}

Image connectedPixels(int x, int y, Image &image){
    queue<pair<int, int>> unchecked;
    int dx[] = {-1, 0, 0, 1},
        dy[] = {0, -1, 1, 0};
    int xMin, xMax, yMin, yMax;
    initBound(xMin, xMax, yMin, yMax, image);
    unchecked.push({x, y});
    image.pixels[x][y] = 0;
    while (!unchecked.empty()){
        pair<int, int> chkPair = unchecked.front();
        unchecked.pop();
        int xChk = chkPair.first, yChk = chkPair.second;
        xMin = min(xMin, xChk), xMax = max(xMax, xChk);
        yMin = min(yMin, yChk), yMax = max(yMax, yChk);
        vis[xChk][yChk] = 1;

        for (int i = 0; i < 4; i++){
            int nx = xChk + dx[i], ny = yChk + dy[i];
            if (image.inRange(nx, ny) && image.pixels[nx][ny]){
                unchecked.push({nx, ny});
                image.pixels[nx][ny] = 0;
            }
        }
    }

    Image charImage(xMax - xMin + 1, yMax - yMin + 1);
    if ((xMax - xMin + 1) * (yMax - yMin + 1) < 100){
        return Image(0, 0);
    }

    for (int row = 0; row < (xMax - xMin + 1); row++){
        for (int col = 0; col < (yMax - yMin + 1); col++){
            charImage.pixels[row][col] = vis[row + xMin][col + yMin];
            vis[row + xMin][col + yMin] = 0;
        }
    }
    return charImage;
}

vector<Image> splitExpr(Image &image){
    vector<Image> charList;
    for (int col = 0; col < image.w; col++){
        for (int row = 0; row < image.h; row++){
            if (image.pixels[row][col]){
                Image charImage = connectedPixels(row, col, image);
                if (charImage.h * charImage.w >= CHAR_MIN_SIZE){
                    charList.push_back(charImage);
                }
            }
        }
    }

    return charList;
}

struct node{
    int type;
    union {
        int num;
        char op;
    }data;
    node(int num){
        type = 1;
        data.num = num;
    }
    node(char op){
        type = 0;
        data.op = op;
    }
};

vector<node> expr;
vector<char> opList;

int priority(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    if (c == '(' || c == ')') return 0;
    return -1;
}

int calcExpr(char exprStr[]){
    for (int i = 0; i < strlen(exprStr); i++){
        if (exprStr[i] >= '0' && exprStr[i] <= '9'){
            expr.push_back(node(int(exprStr[i]-'0')));
        }
        else{
            if (exprStr[i] == '('){
                opList.push_back(exprStr[i]);
            }
            else if (exprStr[i] == ')'){
                while (opList.back() != '('){
                    expr.push_back(node(char(opList.back())));
                    opList.pop_back();
                }
                opList.pop_back();
            }
            else if (exprStr[i] == '^'){
                opList.push_back(exprStr[i]);
            }
            else{
                while (!opList.empty() && priority(opList.back()) >= priority(exprStr[i])) {
                    expr.push_back(node(char(opList.back())));
                    opList.pop_back();
                }
                opList.push_back(exprStr[i]);
            }
        }
    }
    while (!opList.empty()){
        expr.push_back(node(char(opList.back())));
        opList.pop_back();
    }

    for (int i = 0; i < expr.size(); i++){
        if (expr[i].type){
        }
        else{
            int a = expr[i-2].data.num, b = expr[i-1].data.num;
            int ans;
            switch(expr[i].data.op){
                case '+': ans = a+b;
                    break;
                case '-': ans = a-b;
                    break;
                case '*': ans = a*b;
                    break;
                case '/': ans = a/b;
                    break;
                case '^': ans = pow(a, b);
                    break;
            }
            expr.erase(expr.begin() + i - 1, expr.begin() + i + 1);
            expr[i-2].data.num = ans;
            i -= 2;
        }
    }

    return expr[0].data.num;
}

//*
int main() {
    Image image = readImg();
    rmvNoise(image);
    rmvNoise(image);
    rmvNoise(image);
//    printImg(image);
    vector<Image> charList = splitExpr(image);
//    string exprStr;
    char exprStr[EXPR_LEN];
    memset(&exprStr, 0, EXPR_LEN);

    readFontImg();
    generateFontImg();

    for (int imageCnt = 0; imageCnt < charList.size(); imageCnt++) {
//        printf("char%d:\n", imageCnt);
//        printImg(charList[imageCnt]);
//        printf("\n\n\n");
        exprStr[imageCnt] = recogniseChar(charList[imageCnt]);
//        exprStr += recogniseChar(charList[imageCnt]);
//        printf("%s\n", exprStr);
//        cout << exprStr << endl;
//        cout << charList.size() << " " << imageCnt << endl;
    }

//    printf("%d %d\n", charList.size(), sizeof(exprStr)/sizeof(char));
//    printf("Expr: %s\n", exprStr);
//    cout << exprStr << endl;
//    char charArr[exprStr.length()];
//    strcpy(charArr,exprStr.c_str());
//    printf("%d", calcExpr(charArr));
    printf("%d\n", calcExpr(exprStr));
    return 0;
}
/**/
/*
int main(){
    printf("%d", calcExpr("(3-7)*5"));
    return 0;
}
/**/
/*
int main(){
    Image image = readImg();
    rmvNoise(image);

    vector<Image> charList = splitExpr(image);

    for (int i = 0; i < charList.size(); i++) {
        printImg(charList[i]);
        printf("\n\n\n");
    }

    int i = 0;
    vector<double> inputList = vector<double>(charList[i].w * charList[i].h);
    for (int row = 0; row < charList[i].h; row++){
        for (int col = 0; col < charList[i].w; col++){
            inputList[col + row * charList[i].w] = charList[i].pixels[row][col];
        }
    }

    printf("\n\n\ndone");
    CharacterRecognition cr;
    cr.loadInputLayer(inputList);
    cr.readFile("Weight.txt");
    cr.calc();
    printf("result: %c\n", cr.result());

    cr.calcDerivative('3');
    cr.backPropagation(0.1);
    cr.restart();
    cr.calc();
    printf("AftResult : %c\n", cr.result());
    printf("sig: %f\n", cr.sigmoid(65));
    printf("%f", exp(65));
//    cr.writeFile("Weight.txt");
//    printf("number: %.6f", cr.parseDouble("-69420.114514"));
    return 0;
}
/**/