//
//  main.c
//  删除字符串
//
//  Created by 顾梦寅Joyce on 2017/1/6.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char * Strlwr(char *str){
    int i=0;
    while(str[i]){
        if('A'<=str[i] && str[i]<='Z'){
            str[i] += 32;
        }
        i++;
    }
    
    return str;
}
int main(){
    char subStr[1000];        // 用来存储需要删除的字符串
    char str[1000];                // 用来存储待删除的整串
    char strTmp[1000];
    int i=0, j=0;
    unsigned long subLen;
    printf("请输入要被删除的字符串：\n");
    gets(subStr);                // 读取需要删除的字符串
    Strlwr(subStr);
    subLen = strlen(subStr);  // 记录需要删除的字符串的长度
    printf("请输入待删除的字符串：\n");
    gets(str);                         // 获取整串
    strcpy(strTmp, str);
    Strlwr(strTmp);
    printf("Output:\n被删除指定字符串后的字符串如下：\n");
    while(str[i]){
        if(str[i] == ' '){
            i++;                        // 如果当前是空格，则跳过这个空格
        }
        else if(strncmp(strTmp+i, subStr, subLen) == 0){
            i += subLen;        // 如果当前连续 subLen 个字符时需要删除的字符串，则跳过这个长度
        }else{
            str[j++] = str[i++];        // 如果不是上面两种情况，则拷贝字符
        }
    }
    str[j] = '\0';                // 最后字符需要结尾
    
    puts(str);        // 输出结果
    return 0;
}

