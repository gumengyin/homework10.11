//
//  main.c
//  4-18
//
//  Created by 顾梦寅Joyce on 2016/11/7.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int Fun(int n);
int main() {
    int n;
    printf("please inputa integer\n");
    scanf("%d",&n);
    Fun(n);
    return 0;
}
int Fun(int n){
    int a;
    while (n!=0) {
        a=n%10;
        n=n/10;
    switch (a) {
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
    }

        return 0;
}
