//
//  main.c
//  年龄
//
//  Created by 顾梦寅Joyce on 2016/12/13.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
double calculator (char *ptr);
int main() {
    char digit[21];
    int i,n,var1=0,var2=0;
    gets(digit);
    for (i=0; i<strlen(digit); i++) {
        if (digit[i]>=48&&digit[i]<=57) {
            digit[i]=digit[i]-'0';
        }
        else if (digit[i]==42||digit[i]==43||digit[i]==45||digit[i]==47) {
            n=i;
            continue;
        }
        else{
            printf("Input Error\n");
            break;
        }
    }
        for (i=0; i<n; i++) {
            var1=var1*10+digit[i];
        }
        for (i=n+1; i<strlen(digit); i++) {
            var2=var2*10+digit[i];
        }
        if (digit[n]==42) {
            printf("%d\n",var1*var2);
        }
        if (digit[n]==43) {
            printf("%d\n",var1+var2);
        }
        if (digit[n]==45) {
            printf("%d\n",var1-var2);
        }
        if (digit[n]==47) {
            printf("%d\n",var1/var2);
        }
    
    return 0;
}
//用字符形式输入数字 字符转数字 -48/-'0'
