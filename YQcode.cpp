#include<bits/stdc++.h>
#include<algorithm>
#include <unistd.h>

using namespace std;
const int MAX_HEIGHT = 65, MAX_WIDTH = 10000, CHAR_MIN_SIZE = 100;

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
Image connectedPixels(int x, int y, Image &image);

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
//        char str[image.w];
        for (int col = 0; col < image.w; col++){
//            str[col] = image.pixels[row][col] ? '#' : '.';
            printf("%c", image.pixels[row][col] ? '#' : '.');
        }
//        printf("%s\n", str);
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

void initBound(int &xMin, int &xMax, int &yMin, int &yMax, Image image){
    xMin = image.h;
    xMax = 0;
    yMin = image.w;
    yMax = 0;
}

Image connectedPixels(int x, int y, Image &image){
    return image; //return statement just for testing
    //queue<pair<int, int>> connected;
    printf("connectedPixels");
    int vis[MAX_HEIGHT][MAX_WIDTH];
    queue<pair<int, int>> unchecked;
    int dx[] = {-1, 0, 0, 1},
            dy[] = {0, -1, 1, 0};
    int xMin, xMax, yMin, yMax;
    initBound(xMin, xMax, yMin, yMax, image);
    return image;
    printf("%d %d %d %d\n", xMin, xMax, yMin, yMax);
    //connected.push({x, y});
    unchecked.push({x, y});
    image.pixels[x][y] = 0;
//    xMin = min(xMin, x), xMax = max(xMax, x);
//    yMin = min(yMin, y), yMax = max(yMax, y);
//    printf("%d %d %d %d\n", xMin, xMax, yMin, yMax);
//    image.pixels[x][y] = 0;
    return image;
    while (!unchecked.empty()){
        pair<int, int> chkPair = unchecked.front();
        unchecked.pop();
        printf("%d\n", unchecked.empty());
        int xChk = chkPair.first, yChk = chkPair.second;
        xMin = min(xMin, xChk), xMax = max(xMax, xChk);
        yMin = min(yMin, yChk), yMax = max(yMax, yChk);
        vis[xChk][yChk] = 1;
        printf("(%d, %d) %d %d %d %d\n", xChk, yChk, xMin, xMax, yMin, yMax);

        for (int i = 0; i < 4; i++){
            int nx = xChk + dx[i], ny = yChk + dy[i];
            if (image.inRange(nx, ny) && image.pixels[nx][ny]){
                printf("in\n");
                //printf("%d\n", connected.size());
                //connected.push({nx, ny});
                unchecked.push({nx, ny});
                image.pixels[nx][ny] = 0;
                //printImg(image);
            }
        }
    }

    printf("here\n\n\n");

    Image charImage;
    charImage.h = xMax - xMin + 1;
    charImage.w = yMax - yMin + 1;
    image.pixels = vector<vector<int>>(charImage.h, vector<int>(charImage.w));
    for (int row = 0; row < image.h; row++){
        for (int col = 0; col < image.w; col++){
            charImage.pixels[row][col] = vis[row + xMin][col + yMin];
        }
//        pair<int, int> pair = connected.front();
//        connected.pop();
//        int xChk = pair.first, yChk = pair.second;
//        charImage.pixels[xChk - xMin][yChk - yMin] = 1;
    }

    return charImage;
}

vector<Image> splitExpr(Image &image){
    printf("splitExpr()");
    vector<Image> charList;
    for (int col = 0; col < image.w; col++){
        for (int row = 0; row < image.h; row++){
            if (image.pixels[row][col]){
                Image charImage = connectedPixels(row, col, image);
                return charList;
                if (charImage.h * charImage.w >= CHAR_MIN_SIZE){
                    charList.push_back(charImage);
                    printf("char finished\n\n");
                }
            }
        }
    }

    return charList;
}

int main() {
    printf("why?");
    Image i = readImg();
    //printImg(i);
    printf("\n\n\n");
    rmvNoise(i);
    printf("hello?");
    //printImg(i);
    printf("\n\n\n");
    //sleep(5);
    //*
    vector<Image> charList = splitExpr(i);/* //Disable this line and printf works
    for (int i = 0; i < charList.size(); i++) {
        printImg(charList[i]);
        printf("\n");
    }
    */
    printf("done\n\n\n");
    return 0;
}
