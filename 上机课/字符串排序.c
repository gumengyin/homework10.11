//
//  main.c
//  字符串排序
//
//  Created by 顾梦寅Joyce on 2016/11/23.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main (void) {
    char str[100];
    while (gets(str)!=NULL) {
        if (str[0]!=101&&str[1]!=120&&str[2]!=105&&str[3]!=116) {
            void ps(char str[]);
            ps(str);
            
        }
        if (str[0]==101&&str[1]==120&&str[2]==105&&str[3]==116) {
            printf("End Of Input\n");
            break;
        }
    }
    return 0;
}
void ps(char str[]) {
    int i,j,a=0;
    char t;
    for(i=0;i<strlen(str)-1;i++) {
        if ((str[i]<48)||(str[i]>=58&&str[i]<=64)||(str[i]>=91&&str[i]<=96)||(str[i]>=123)) {
            a=a+1;
        }
    }
    if (a>0) {
        printf("Input Error\n");
    }
    else{
        for(i=0;str[i]!='\0';i++) {
            printf("%c",str[i]);
        }
        if (str[i]=='\0') {
            printf("\n");
        }
        for(i=0;i<strlen(str)-1;i++) {
            for(j=i+1;j<strlen(str);j++) {
                if(str[i]>str[j]) {
                    t=str[i];
                    str[i]=str[j];
                    str[j]=t;
                }
            }
        }
        for(i=0;str[i]!='\0';i++) {
            printf("%c",str[i]);
        }
        if (str[i]=='\0') {
            printf("\n");
        }
    }
}
