//
//  main.c
//  年龄
//
//  Created by 顾梦寅Joyce on 2016/12/13.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
//double calculator (char *ptr); //如何把数字传给指针变量 若定义成指针数组 星号为什么要加
int main() {
    char digit[20];
    gets(digit);
    int i,n=0,m1=0,m2=0,flag;
    double var1=0,var2=0,a=0.1;
    for (i=0; i<strlen(digit); i++) {
        if (digit[i]>=48&&digit[i]<=57) {
            digit[i]=digit[i]-'0';
        }
        else if (digit[i]==42||digit[i]==43||digit[i]==45||digit[i]==47) {
            n=i;
            continue;
        }
        else if(digit[i]==46){
            if (n==0) {
                m1=i;
            }
            else
                m2=i;
            continue;
        }
        else{
            printf("Input Error\n");
            flag=1;
            break;
        }
    }
    if (flag==0) {
        if (m1==0) {
            for (i=0; i<n; i++) {
                var1=var1*10+digit[i];
            }
        }
        if (m1!=0) {
            for (i=0; i<m1; i++) {
                var1=var1*10+digit[i];
            }
            for (i=m1+1; i<n; i++) {
                var1=var1+digit[i]*a;
                a=a*0.1;
            }
        }
        a=0.1;
        if (m2==0) {
            for (i=n+1; i<strlen(digit); i++) {
                var2=var2*10+digit[i];
            }
        }
        if (m2!=0) {
            for (i=n+1; i<m2; i++) {
                var2=var2*10+digit[i];
            }
            for (i=m2+1; i<strlen(digit); i++) {
                var2=var2+digit[i]*a;
                a=a*0.1;
            }
        }
        if (digit[n]==42) {
            printf("%.2f\n",var1*var2);
        }
        if (digit[n]==43) {
            printf("%.2f\n",var1+var2);
        }
        if (digit[n]==45) {
            printf("%.2f\n",var1-var2);
        }
        if (digit[n]==47) {
            printf("%.2f\n",var1/var2);
        }
    }
    return 0;
}
//double calculator (char *ptr){

//return 0;
//}
//用字符形式输入数字 字符转数字 -48/-'0'
