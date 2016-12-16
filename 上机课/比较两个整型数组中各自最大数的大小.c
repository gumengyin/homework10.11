//
//  main.c
//  比较两个整型数组中各自最大数的大小
//
//  Created by 顾梦寅Joyce on 2016/12/13.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    int i,j,temp;
    char digit1[20];
    char digit2[20];
    gets(digit1);
    gets(digit2);
    for (i=0; i<strlen(digit1); i++) {
        if (digit1[i]==32) {
            digit1[i]=digit1[i+1];
        }
    }
    for (i=0; i<strlen(digit2); i++) {
        if (digit2[i]==32) {
            digit2[i]=digit2[i+1];
        }
    }
    for (i=0; i<strlen(digit1); i++) {
        for (j=0; j<strlen(digit1)-i; j++) {
            if (digit1[j]<digit1[j+1]) {
                temp=digit1[j];
                digit1[j]=digit1[j+1];
                digit1[j+1]=temp;
            }
        }//冒泡排序法
    }
    //*ptr1=&digit1[0];
    for (i=0; i<strlen(digit2); i++) {
        for (j=0; j<strlen(digit2)-i; j++) {
            if (digit2[j]<digit2[j+1]) {
                temp=digit2[j];
                digit2[j]=digit2[j+1];
                digit2[j+1]=temp;
            }
        }//冒泡排序法
    }
    if (strlen(digit1)>20) {
        printf("Input Error");
    }
    else{
        if (digit2[0]>=digit1[0]) {
            printf("%c",digit2[0]);
        }
        else
            printf("%c",digit1[0]);
    }
    return 0;
}
