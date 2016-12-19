//
//  main.c
//  中忍考试
//
//  Created by 顾梦寅Joyce on 2016/12/19.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    int n,l,k,y,i,j,var;
    scanf("%d%d%d%d",&n,&l,&k,&y);
    int sum[n];
    for (i=0; i<n+1; i++) {
        char ch[100];
        gets(ch);//怎么解决读入上一行回车的问题
        sum[i]=0;
        for (j=0; j<strlen(ch); j++) {
            if(ch[j]=='A'){
                sum[i]=sum[i]+l+k+y;
            }
            if(ch[j]=='B'){
                sum[i]=sum[i]+2*l+k;
            }
            if(ch[j]=='C'){
                sum[i]=sum[i]+3*l+3*k+2*y;
            }
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n-i; j++) {
            if (sum[i]<sum[i+1]) {
                var=sum[i];
                sum[i]=sum[i+1];
                sum[i+1]=var;
            }
        }
    }
    printf("%d\n",sum[n-1]);
    return 0;
}
