//
//  main.c
//  5-5
//
//  Created by 顾梦寅Joyce on 2016/12/9.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h> //调用函数strcmp比较字符串大小 相同则返回0
void Fun(int n);
int main() {
    char *p[3]={"save","open","quit"};
    char s[50]; //gets中存入的是几个字符组成的数组还是字符串 为什么要用指针呢
    int i;
    printf("input a string:\n");
    scanf("%s",s); //  注意读取字符串格式
    for (i=0; i<3; i++) {
        if (strcmp(s,p[i])==0) {
            Fun(i);
        }
    }
    return 0;
}
void Fun(int n){ //看p[i]是哪一个匹配
    switch (n) {
        case 0:
            printf("This is save function\n");
            break;
        case 1:
            printf("This is open function\n");
            break;
        case 2:
            printf("This is quit function\n");
            break;

    }
}
