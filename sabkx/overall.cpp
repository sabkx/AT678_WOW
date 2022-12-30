#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4")
#include<set>
#include<map>
#include<cmath>
#include<stack>
#include<queue>
#include<cstdio>
#include<cstdlib>
#include<bitset>
#include<string>
#include<vector>
#include<random>
#include<complex>
#include<cstring>
#include<cassert>
#include<utility>
#include<iostream>
#include<algorithm>
// int start=clock();
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
namespace sub1{
    #define minsize 15
    #define MAXN 100010
    #define MAXN2 305
    #define pi 3.1415926535897932384626433832
    #define inf 0x3f3f3f3f
    #define eps 1e-6
    using namespace std;
    int t,w,b;
    struct Image{
        vector<vector<int> > vec;
        int h,w;
        int x;
        Image(){
            vec.clear();
            h=w=0;
        }
        Image(int x,int y){
            for(int i=0;i<x;i++){
                vector<int> temp;
                temp.clear();
                for(int j=0;j<y;j++){
                    temp.push_back(0);
                }
                vec.push_back(temp);
            }
            h=x;
            w=y;
        }
        void build(vector<string> input){
            vec.clear();
            vector<int> temp;
            for(string str:input){
                for(char i:str){
                    if(i=='#'){
                        temp.emplace_back(1);
                    }else{
                        temp.emplace_back(0);
                    }
                }
                vec.push_back(temp);
                temp.clear();
            }
            h=vec.size();
            w=vec[0].size();
        }
        void print(){
            for(int i=0;i<vec.size();i++){
                for(int j=0;j<vec[i].size();j++){
                    if(vec[i][j]==1){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    };
    inline void copy(Image &to_be_copied,Image to_copy){
        int x_size=to_copy.vec.size();
        int y_size=to_copy.vec[0].size();
        to_be_copied.vec.clear();
        for(int i=0;i<x_size;i++){
            vector<int> temp;
            for(int j=0;j<y_size;j++){
                temp.emplace_back(to_copy.vec[i][j]);
            }
            to_be_copied.vec.emplace_back(temp);
        }
    }
    inline void medium_reduce_noise(Image &input){
        //reduce noise
        Image temp=Image();
        copy(temp,input);
        int x=input.vec.size();
        int y=input.vec[0].size();
        int arr[9];
        for(int i=1;i<x-1;i++){
            for(int j=1;j<y-1;j++){
                arr[0]=input.vec[i][j];
                arr[1]=input.vec[i-1][j];
                arr[2]=input.vec[i][j+1];
                arr[3]=input.vec[i+1][j];
                arr[4]=input.vec[i][j-1];
                arr[5]=input.vec[i-1][j-1];
                arr[6]=input.vec[i+1][j-1];
                arr[7]=input.vec[i-1][j+1];
                arr[8]=input.vec[i+1][j+1];
                sort(arr,arr+8);
                temp.vec[i][j]=((double)arr[0]*0.153661872618337+arr[1]*0.202700255591144+arr[2]*0.0886373360771073+arr[3]*0.0725557944480514+arr[4]*0.0730594954560799+arr[5]*0.110144307001566+arr[6]*0.0858114972662411+arr[7]*0.148150899571762+arr[8]*0.156203242695401)>0.525;
                // temp.vec[i][j]=((double)arr[4]*0.7+arr[3]*0.18+arr[5]*0.11+arr[2]*0.01)>0.86;
                // temp.vec[i][j]=arr[4];
            }
        }
        for(int i=1;i<x-1;i++){
            temp.vec[i][0]=(temp.vec[i][0]+temp.vec[i+1][0]+temp.vec[i-1][0]+temp.vec[i][1])/4;
            temp.vec[i][y-1]=(temp.vec[i][y-1]+temp.vec[i+1][y-1]+temp.vec[i-1][y-1]+temp.vec[i][y-2])/4;
        }
        for(int j=1;j<y-1;j++){
            temp.vec[0][j]=(temp.vec[0][j]+temp.vec[0][j+1]+temp.vec[0][j-1]+temp.vec[1][j])/4;
            temp.vec[x-1][j]=(temp.vec[x-1][j]+temp.vec[x-1][j+1]+temp.vec[x-1][j-1]+temp.vec[x-2][j])/4;
        }
        copy(input,temp);
        // return temp;
    }
    bool vis[MAXN2][9005];
    int maxx[MAXN2];
    int minx[MAXN2];
    int maxy[MAXN2];
    int miny[MAXN2];
    int cnt2=0;
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    inline void dfs2(int x,int y,Image im){
        if(x>=im.vec.size()||x<0||y>=im.vec[0].size()||y<0){
            return;
        }
        if(im.vec[x][y]==0){
            return;
        }
        // printf("%d %d %d\n",x,y,cnt2);
        maxx[cnt2]=max(maxx[cnt2],x);
        minx[cnt2]=min(minx[cnt2],x);
        maxy[cnt2]=max(maxy[cnt2],y);
        miny[cnt2]=min(miny[cnt2],y);
        if(vis[x][y]){
            return;
        }
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            int newx=x+dx[i];
            int newy=y+dy[i];
            if(newx>=im.vec.size()||newx<0||newy>=im.vec[0].size()||newy<0){
                continue;
            }
            if(!vis[newx][newy]&&im.vec[newx][newy]==1){
                // vis[newx][newy]=true;
                dfs2(newx,newy,im);
            }
        }
    }
    inline void dfs(Image im){
        cnt2=0;
        // im.print();
        for(int i=0;i<im.vec.size();i++){
            for(int j=0;j<im.vec[i].size();j++){
                // printf("%d %d %d\n",i,j,vis[i][j]);
                if(!vis[i][j]&&im.vec[i][j]==1){
                    cnt2++;
                    // printf("%d %d\n",i,j);
                    dfs2(i,j,im);
                }
            }
        }
    }
    inline vector<Image> split(Image input){
        cnt2=0;
        // for(int i=0;i<=input.vec.size()+1;i++){
        //     for(int j=0;j<=input.vec[0].size()+1;j++){
        //         vis[i][j]=0;
        //     }
        // }
        memset(vis,0,sizeof(vis));
        vector<Image> res;
        for(int i=0;i<MAXN2;i++){
            minx[i]=miny[i]=inf;
            maxx[i]=maxy[i]=0;
        }
        dfs(input);
        // printf("cnt2: %d\n",cnt2);
        for(int i=1;i<=cnt2;i++){
            if(maxx[i]-minx[i]<=minsize&&maxy[i]-miny[i]<=minsize){
                // printf("%d\n",i);
                continue;
            }
            Image temp2(maxx[i]-minx[i]+1,maxy[i]-miny[i]+1);
            temp2.x=miny[i];
            // res.push_back(Image(maxx[i]-minx[i]+1,maxy[i]-miny[i]+1));
            for(int x=minx[i];x<=maxx[i];x++){
                for(int y=miny[i];y<=maxy[i];y++){
                    // printf("%d\n",temp.vec[x-minx[i]][y-miny[i]]);
                    temp2.vec[x-minx[i]][y-miny[i]]=input.vec[x][y];
                }
            }
            res.emplace_back(temp2);
            // printf("%d %d %d %d\n",maxx[i],minx[i],maxy[i],miny[i]);
        }
        // res.push_back(input);
        // assert(res.size()!=0);
        return res;
    }
    inline Image stretching(Image input,int newx,int newy){
        Image res(newx,newy);
        for(int i=0;i<newx;i++){
            for(int j=0;j<newy;j++){
                res.vec[i][j]=input.vec[input.h*i/newx][input.w*j/newy];
            }
        }
        return res;
        // vector<Image> aa;
        // aa=split(res);
        // return aa[0];
        // return split(res)[0];
    }
    inline Image distort(Image input,double sx,double sy){
        Image res(input.vec.size()*3,input.vec[0].size()*3);
        for(int i=0;i<input.h;i++){
            for(int j=0;j<input.w;j++){
                // if(input.vec[i][j]){
                //     aaaa++;
                // }
                res.vec[(int)(i+sy*j)+input.h][(int)(j+sx*i)+input.w]=input.vec[i][j];
            }
        }
        // return res;
        vector<Image> aa;
        aa=split(res);
        return aa[0];
        // return split(res)[0];
    }
    inline Image rotate(Image input,double angle){
        if(abs(angle)<=eps){
            return input;
        }
        int newL=max(input.vec.size(),input.vec[0].size());
        angle=angle*pi/180;
        Image res(newL*2,newL*2);
        for(int i=1;i<=input.h;i++){
            for(int j=1;j<=input.w;j++){
                // if(i-1>=input.vec.size()||j-1>=input.vec[0].size()){
                //     printf("%d %d\n",i,j);
                //     printf("range: %d %d\n",input.vec.size(),input.vec[0].size());
                //     continue;
                // }
                if(input.vec[i-1][j-1]){
                    double p=atan((double)j/i);
                    double delta=p-angle;
                    double len=sqrt(i*i+j*j);
                    res.vec[(int)(len*cos(delta)+0.4)+(newL)][(int)(len*sin(delta)+0.4)+(newL)]=1;
                }
            }
        }
        // res.print();
        vector<Image> aa;
        aa=split(res);
        return aa[0];
        // return split(res)[0];
    }
    inline double compare(Image x,Image y){
        if(x.h<0.65*y.h||x.h*0.65>y.h||x.w<0.65*y.w||x.w*0.65>y.w){
            return 0;
        }
        Image newx=stretching(x,y.vec.size(),y.vec[0].size());
        int cntsame=0;
        for(int i=0;i<y.vec.size();i++){
            for(int j=0;j<y.vec[0].size();j++){
                // printf("%d %d\n",i,j);
                // cntsame+=(newx.vec[i][j]=='#');
                cntsame+=(newx.vec[i][j]==y.vec[i][j]);
            }
        }
        return ((double)cntsame/(y.h*y.w));
    }
    Image realfont[16][41];
    inline void prework(){
        double Mmin = 0.9, Mmax=1,Rmin,Rmax,Smin,Smax;
    	if(0<=t&&t<30){
    		Rmin=-2,Rmax=2,Smin=Smax=0;
    	}else if(30<=t&&t<90){
    		Rmin=-10,Rmax = 10, Smin=-0.1,Smax=0.1;
    	}else{
    		Rmin=-15,Rmax=15,Smin=-0.1,Smax=0.1;
    	}
    	uniform_real_distribution<> M(Mmin, Mmax), R(Rmin, Rmax), S(Smin, Smax);
    	default_random_engine gen(time(NULL));
        for(int i=0;i<16;i++){
            Image temp(66,39);
            for(int x=0;x<66;x++){
                for(int y=0;y<39;y++){
                    temp.vec[x][y]=(font[i][x][y]=='#');
                }
            }
            vector<Image> vec2;
            vec2=split(temp);
            realfont[i][0]=vec2[0];
            // realfont[i][0]=temp;
            for(int j=1;j<=4;j+=3){
                Image temp2;
                temp2=stretching(temp,66*M(gen),39*M(gen));
                realfont[i][j]=temp2;
                temp2=rotate(temp2,R(gen));
                realfont[i][j+1]=temp2;
                temp2=distort(temp2,S(gen),S(gen));
                realfont[i][j+2]=temp2;
                // temp2.print();
            }
        }
    }
    struct which{
        int x,id;
    };
    which in[MAXN2];
    inline bool cmp(which a,which b){
        return a.x<b.x;
    }
    string expr="";
    const string table="0123456789)/-(+*";
    inline double match(int x,Image img){
        double res=0;
        for(int i=0;i<=6;i++){
            if(res>0.75){
                return res;
            }
            res=max(res,compare(realfont[x][i],img));
        }
        // printf("%d %lf\n",x,res);
        return res;
    }
    inline void process(Image im){
        double maxx=-1.0;
        double temp;
        int id=0;
        for(int i=0;i<=15;i++){
            temp=match(i,im);
            if(temp>0.8){
                id=i;
                break;
            }
            if(temp>maxx){
                id=i;
                maxx=temp;
            }
        }
        expr+=table[id];
    }
    inline void read(char &ch){
        scanf("%c",&ch);
    }
    void work(){
        vector<string> vec;
        string str;
        char ch;
        prework();
        // realfont[8][0].print();
        for(int i=1;i<=b;i++){
            str="";
            for(int j=1;j<=w;j++){
                read(ch);
                str+=ch;
                // printf("%d %c\n",j,ch);
            }
            scanf("\n");
            vec.push_back(str);
            // putchar('\n');
        }
        // printf("%d\n",1);
        Image im;
        im.build(vec);
        // im.print();
        medium_reduce_noise(im);
        medium_reduce_noise(im);
        // medium_reduce_noise(im);
        // medium_reduce_noise(im);
        // im.print();
        vector<Image> splitted=split(im);
        int len=splitted.size();
        for(int i=1;i<=len;i++){
            in[i].x=splitted[i-1].x;
            in[i].id=i-1;
        }
        // printf("1\n");
        sort(in+1,in+len+1,cmp);
        // process(splitted[0]);
        for(int i=1;i<=len;i++){
            // printf("%d\n",in[i].id);
            // printf("y coor: %d\n",splitted[in[i].id].x);
            // splitted[in[i].id].print();
            process(splitted[in[i].id]);
        }
        // printf("2\n");
        // for(char i:expr){
        //     putchar(i);
        //     putchar(' ');
        // }
        // putchar('\n');
        // printf("%d\n",splitted.size());
        // splitted[0].print();
    }
    stack<int> data, op;
    stack<int> num,data2;
    int precedence(char c){
        if(c=='+'||c=='-'){
            return 1;
        }
        if(c=='*'||c=='/'){
            return 2;
        }
        return 0;
    }
    int applyOp(int x,int y,char c){
        if(c=='+'){
            return x+y;
        }
        if(c=='-'){
            return x-y;
        }
        if(c=='*'){
            return x*y;
        }
        if(c=='/'){
            return x/y;
        }
        return -1;
    }
    int evaluate(string tokens){
        int i;
        stack<int> values;
        stack<char> ops;
        for(i = 0; i < tokens.length(); i++){
            if(tokens[i] == '('){
                ops.push(tokens[i]);
            }
            else if(isdigit(tokens[i])){
                int val = 0;
                while(i<tokens.length()&&isdigit(tokens[i])){
                    val = (val*10) + (tokens[i]-'0');
                    i++;
                }
                values.push(val);
                i--;
            }else if(tokens[i] == ')'){
                while(!ops.empty() && ops.top() != '('){
                    int val2 = values.top();
                    values.pop();
                    int val1 = values.top();
                    values.pop();
                    char op = ops.top();
                    ops.pop();
                    values.push(applyOp(val1, val2, op));
                }
                if(!ops.empty()){
                    ops.pop();
                }
            }else{
                while(!ops.empty() && precedence(ops.top())>= precedence(tokens[i])){
                    int val2 = values.top();
                    values.pop();
                    int val1 = values.top();
                    values.pop();
                    char op = ops.top();
                    ops.pop();
                    values.push(applyOp(val1, val2, op));
                }
                ops.push(tokens[i]);
            }
        }
        while(!ops.empty()){
            int val2 = values.top();
            values.pop();
            int val1 = values.top();
            values.pop();
            char op = ops.top();
            ops.pop();
            values.push(applyOp(val1, val2, op));
        }
        return values.top();
    }
    int solve1(){
        // freopen("AT678_input.txt","r",stdin);
        // freopen("AT678_output.txt","w",stdout);
        // printf("%d \n%d %d\n",t,w,b);
        // printf("b4 work function");
        work();
        printf("%d\n",evaluate(expr));
        // printf("%d\n",clock()-start);
        // printf("%d\n",CLOCKS_PER_SEC);
        // printf("after work function\n");
        return 0;
    }
};
namespace sub2{
    using namespace std;
    const int MAX_HEIGHT = 65, MAX_WIDTH = 10000, CHAR_MIN_SIZE = 100,
    INF = 0x3f3f3f3f, EXPR_LEN = 300;
    int vis[MAX_HEIGHT<<3][MAX_WIDTH];
    char charRepresentation[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ')', '/', '-', '(', '+', '*'};
    int t, w, h;
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
        // scanf("%d", &t);
        // scanf("%d %d", &w, &h);
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
    int solve2() {
        Image image = readImg();
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
};
// using namespace sub1;
int main(void){
    int t,w,b;
    scanf("%d%d%d\n",&t,&w,&b);
    if(t<=30){
        sub1::t=t;
        sub1::w=w;
        sub1::b=b;
        sub1::solve1();
    }else{
        sub2::t=t;
        sub2::w=w;
        sub2::h=b;
        sub2::solve2();
    }
}