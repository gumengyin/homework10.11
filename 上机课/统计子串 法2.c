//
//  main.c
//  统计子串2
//
//  Created by 顾梦寅Joyce on 2016/12/10.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//
#include <stdio.h>
#include <string.h>
int findStr(char *str, char *substr) //比较函数，参数是字符串指针
{
    int  n;
    char  *p, *r;
    n = 0;
    while (*str)  //
    {
        p = str;
        r = substr;
        while (*r)
            if (*r == *p)//从str字符串的左侧第一字母比较，如果相同继续下一个字母
            {
                r++;
                p++;
            }
            else
            {
                break;
            }
        if (*r == '\0')//比较到substr的结尾，相同则继续下一次
            n++;
        str++;
    }
    return n;
}

int main(void)
{
    char str[81], substr[10];
    int n;
    printf("输入原字符串:");
    gets(str);//输入字符串str
    printf("输入子字符串:");
    gets(substr);//输入字符串substr
    puts(str);//输出字符串
    puts(substr);//输出字符串
    printf("n=%d\n", findStr(str, substr));       //比较字符串并返回次数
    
}
