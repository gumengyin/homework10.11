//
//  main.c
//  字符串排序
//
//  Created by 顾梦寅Joyce on 2016/11/23.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
void Sort(char x);
int main() {
    char n,x=n;
    while(scanf("%c",&n)!=EOF){
        int a=0;
        n=getchar();
        while (n!='\n') {
            if ((n<48)||(n>=58&&n<=64)||(n>=91&&n<=96)||(n>=123)) {
                a=a+1;
            }
            n=getchar();
        }
        if (a>0) {
            printf("Input Error\n");
        }
        else{
            Sort(x);
        }
    return 0;
    }
}
    
void Sort(char x){
    int b,i,m=0;
    char a[printf("%c",x)],out[printf("%c",x)];
    printf("%c",x);
    x=getchar();
    while (x!='\n') {
        for (i=0;i<printf("%c",x); i++) {
            a[i]=x;
        }
        x=getchar();
    }
    for (b=48; b<=122;b++) {
        for (i=0;i<printf("%c",x); i++) {
            if(a[i]==b){
                out[m]=a[i];
                m=m+1;
            }
        }
        for (m=0;m<printf("%c",x); m++) {
            printf("%c",out[m]);
        }
    }
}
