#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
const int MAX_WIDTH = 10000, CHAR_MIN_SIZE = 16;

struct Image{
    int w, h;
    vector<vector<int>> pixels;
    Image(){}
    Image(Image const &image){
        w = image.w;
        h = image.h;
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
pair<Image, bool> connectedPixels(int x, int y, Image image);

Image readImg(){
    Image image;
    int w, h;
    scanf("%d %d", &w, &h);
    image.w = w;
    image.h = h;
    image.pixels = vector<vector<int>>(h, vector<int>(w));
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
        char str[image.w];
        //printf("%s\n", str);
        for (int col = 0; col < image.w; col++){
            str[col] = image.pixels[row][col] ? '#' : '.';
            //printf("%")
        }
        printf("%s\n", str);
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

void initBound(int &xMin, int &xMax, int &yMin, int &yMax, Image image){
    xMin = image.h;
    xMax = 0;
    yMin = image.w;
    yMax = 0;
}

pair<Image, bool> connectedPixels(int x, int y, Image image){
    queue<pair<int, int>> connected;
    queue<pair<int, int>> unchecked;
    int dx[] = {-1, 0, 0, 1},
        dy[] = {0, -1, 1, 0};
    int xMin, xMax, yMin, yMax;
    initBound(xMin, xMax, yMin, yMax, image);

    printf("%d %d %d %d\n", xMin, xMax, yMin, yMax);
    connected.push({x, y});
    unchecked.push({x, y});
    xMin = min(xMin, x); xMax = max(xMax, x);
    yMin = min(yMin, y); yMax = max(yMax, y);
    printf("%d %d %d %d\n", xMin, xMax, yMin, yMax);
    image.pixels[x][y] = 0;
    while (!unchecked.empty()){
        pair<int, int> chkPair = unchecked.front();
        unchecked.pop();
        printf("%d\n", unchecked.empty());
        int xChk = chkPair.first, yChk = chkPair.second;
        for (int i = 0; i < 4; i++){
            int nx = xChk + dx[i], ny = yChk + dy[i];
            if (!image.inRange(nx, ny)) continue;
            printf("(%d, %d) %d %d %d %d\n", nx, ny, xMin, xMax, yMin, yMax);
            if (image.pixels[nx][ny]){
                printf("in\n");
                printf("%d\n", connected.size());
                connected.push({nx, ny});
                unchecked.push({nx, ny});
                xMin = min(xMin, nx); xMax = max(xMax, nx);
                yMin = min(yMin, ny); yMax = max(yMax, ny);
                image.pixels[nx][ny] = 0;
                //printImg(image);
            }
        }
    }

    printf("here\n\n\n");

    Image charImage;
    bool valid = connected.size() >= CHAR_MIN_SIZE;
    charImage.h = xMax - xMin + 1;
    charImage.w = yMax - yMin + 1;
    image.pixels = vector<vector<int>>(charImage.h, vector<int>(charImage.w, 0));
    while (!connected.empty()){
        pair<int, int> pair = connected.front();
        connected.pop();
        int xChk = pair.first, yChk = pair.second;
        charImage.pixels[xChk - xMin][yChk - yMin] = 1;
    }

    return {charImage, valid};
}

vector<Image> splitExpr(Image image){
    vector<Image> charList;
    for (int col = 0; col < image.w; col++){
        for (int row = 0; row < image.h; row++){
            if (image.pixels[row][col]){
                pair<Image, bool> pair = connectedPixels(row, col, image);
                if (pair.second){
                    charList.push_back(pair.first);
                    printf("char finished\n\n");
                }
            }
        }
    }

    return charList;
}

int main() {
    Image i = readImg();
    printf("\n\n\n");
    rmvNoise(i);
    printImg(i);
    printf("\n\n\n");
    vector<Image> charList = splitExpr(i);
    for (int i = 0; i < charList.size(); i++){
        printImg(charList[i]);
        printf("\n");
    }
    printf("done\n\n\n");
    return 0;
}
