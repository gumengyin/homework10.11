//
//  main.c
//  投票统计
//
//  Created by 顾梦寅Joyce on 2016/12/19.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//
struct Candidate {
    char name[10];
};
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int n,i;
    unsigned int zs=0,ls=0,ww=0,qq=0;
    scanf("%d",&n);
    struct Candidate vote[n];
    if (n<=3||n>100) {
        printf("Input Error\n");
    }
    else{
        for (i=0; i<n; i++) {
            scanf("%s",vote[i].name);
            if (strcmp(vote[i].name, "ZS")==0) {
                zs=zs+1;
            }
            else if (strcmp(vote[i].name, "LS")==0) {
                ls=ls+1;
            }
            else if (strcmp(vote[i].name, "WW")==0) {
                ww=ww+1;
            }
            else
                qq=qq+1;
        }
            printf("ZS:%d\nLS:%d\nWW:%d\nQQ:%d\n",zs,ls,ww,qq);
    }
    return 0;
}
