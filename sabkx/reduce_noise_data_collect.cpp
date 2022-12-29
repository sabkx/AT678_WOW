#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<iostream>
#define MAXN 305
using namespace std;
int arr[MAXN][MAXN];
int arr2[9];
int main(void){
    freopen("sample_reduce_noise.txt","r",stdin);
    freopen("result.txt","w",stdout);
    string str;
    int len;
    int id=0;
    while(getline(cin,str)){
        id++;
        len=str.length();
        for(int i=0;i<str.length();i++){
            arr[id][i+1]=(str[i]=='#');
        }
        // cout<<str<<"\n";
    }
    for(register int i=2;i<id;i++){
        for(register int j=2;j<len;j++){
            arr2[0]=arr[i][j];
            arr2[1]=arr[i-1][j];
            arr2[2]=arr[i][j+1];
            arr2[3]=arr[i+1][j];
            arr2[4]=arr[i][j-1];
            arr2[5]=arr[i-1][j-1];
            arr2[6]=arr[i+1][j-1];
            arr2[7]=arr[i-1][j+1];
            arr2[8]=arr[i+1][j+1];
            sort(arr2,arr2+8);
            if(arr2[8]==0){
                continue;
            }
            for(int x=0;x<=8;x++){
                printf("%d ",arr2[x]);
            }
            printf("%d\n",arr[i][j]);
        }
    }
}