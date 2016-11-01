//
//  main.c
//  3-4 switch
//
//  Created by 顾梦寅Joyce on 16/10/24.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main(void) {
    char ch;
    printf("请输入一串字符\n");
    scanf("%c",&ch);
    ch=getchar();
    int i=0;
    switch(ch)
    {
        case'0':
            i=i+1;
        case'1':
            i=i+1;
        case'2':
            i=i+1;
        case'3':
            i=i+1;
        case'4':
            i=i+1;
        case'5':
            i=i+1;
        case'6':
            i=i+1;
        case'7':
            i=i+1;
        case'8':
            i=i+1;
        case'9':
            i=i+1;
            break;
    }
    printf("数字个数为%d",i);
    return 0;
    
}
