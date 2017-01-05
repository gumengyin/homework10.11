//
//  main.c
//  恶搞指数
//
//  Created by 顾梦寅Joyce on 2017/1/4.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.


//小明的朋友过生日，小明准备了一件礼物，不过小明想恶搞一下他的朋友，所以他准备了一堆盒子，其中有一个盒子里面装了礼物。盒子里面可以再放零个或者多个盒子。假设放礼物的盒子里不再放其他盒子。小明想让你帮他算出恶搞指数，即最少需要拆多少个盒子才能拿到礼物。
//输入一个长度不大于1000,只包含（，）和 B 三种字符的字符串，用()表示一个盒子，B表示礼物。


#include <stdio.h>
#include <string.h>
int main(){
    char a[1000];
    int i,n=0;
    gets(a);
    for (i=0; i<strlen(a); i++) {
        if (a[i]=='B') {
            n=i;
            break;
        }
    }
    int sum,sum1=0,sum2=0;
    for (i=n+1; ; i++) {
        if (a[i]==')'&&(a[i+1]==')'||a[i-1]==')')) {
            sum1++;
        }
        else
            break;
    }
    for (i=n-1; ; i--) {
        if (a[i]=='('&&(a[i+1]=='('||a[i-1]=='(')) {
            sum2++;
        }
        else
            break;
    }
    if (sum1>sum2) {
        sum=sum1;
        for (i=n+sum+1; i<strlen(a); i++) {
            if (a[i]==')'&&a[i-1]==')') {
                sum++;
            }
        }
    }
    else{
        sum=sum2;
        for (i=n-sum-1; i>=0; i--) {
            if (a[i]=='('&&a[i+1]=='(') {
                sum++;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
