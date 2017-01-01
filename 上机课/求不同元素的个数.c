//
//  main.c
//  求不同元素的个数
//
//  Created by 顾梦寅Joyce on 2017/1/1.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
void Fun(int digit[],int m){
    int i,j,temp,out=0;
    for (i=0; i<m; i++) {
        for (j=0; j<m-i; j++) {
            if (digit[j]>digit[j+1]) {
                temp=digit[j+1];
                digit[j+1]=digit[j];
                digit[j]=temp;
            }
        }
    }
    for (i=0; i<m; i++) {
        if (digit[i]!=digit[i+1]) {
            out=out+1;
        }
    }
    printf("%d",out);
}
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int m,j;
        scanf("%d",&m);
        int digit[m];
        for (j=0; j<m; j++) {
            scanf("%d",&digit[j]);
        }
        Fun(digit,m);
    }
    
    return 0;
}
