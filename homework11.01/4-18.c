//
//  main.c
//  4-18
//
//  Created by 顾梦寅Joyce on 2016/11/7.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    char x;
    printf("please input a integer\n");
    scanf("%c",&x);
    x=getchar();
    switch (x) {
        case'0':
            printf("48-");
        case'1':
            printf("49-");
        case'2':
            printf("50-");
        case'3':
            printf("51-");
        case'4':
            printf("52-");
        case'5':
            printf("53-");
        case'6':
            printf("54-");
        case'7':
            printf("55-");
        case'8':
            printf("56-");
        case'9':
            printf("57-");
            break;
    }
    
    return 0;
}
/*
 用数组的方法
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 void int_char(int n){
 char b[20];
 itoa(n,b,10);   ／／C99不支持
 b[strlen(b)]='-';
 printf("%s\n",b);
 }
 int main() {
 int n;
 while (scanf("%d",&n)==1) {
 int_char(n);
 return 0;
 }
 }
 */
