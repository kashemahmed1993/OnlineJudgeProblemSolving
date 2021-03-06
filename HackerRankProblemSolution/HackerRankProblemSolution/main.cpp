//
//  main.cpp
//  HackerRankProblemSolution
//  Problem Name: Cavity Map
//  Created by Md. Abul Kashem on 25/1/20.
//  Copyright © 2020 Md. Abul Kashem. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>

#define N 101

using namespace std;

int fx[] = {0,0,1,-1};
int fy[] = {1,-1,0,0};

int main(){
    char ch[N][N];
    int n,flag;
    
    while (scanf("%d",&n)==1) {
        for(int i=0;i<n;i++)
        {
            scanf("%s",ch[i]);
        }
        
        for(int i=1;i<n-1;i++)
            for(int j=1;j<n-1;j++)
            {
                flag=1;
                for(int k=0;k<4;k++)
                {
                    if(ch[i][j]<=ch[i+fx[k]][j+fy[k]]){
                        flag=0;
                    }
                }
                if(flag){
                    ch[i][j]='X';
                }
            }
        for (int i=0;i<n;i++)
        {
            printf("%s\n",ch[i]);
        }
    }
    return 0;
}
