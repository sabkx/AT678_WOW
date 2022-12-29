clc;
close all;
clear;
fileID=fopen("result.txt","r");
input=fscanf(fileID,"%d %d %d %d %d %d %d %d %d %d\n",[1481 10]);
%%
% input
Y=input(:,10);
X=input(:,1:9);
[b,bint,r,rint,stats] = regress(Y,X);