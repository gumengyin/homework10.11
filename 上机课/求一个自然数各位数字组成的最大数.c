//
//  main.c
//  求一个自然数各位数字组成的最大数
//
//  Created by 顾梦寅Joyce on 2017/1/2.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<=n; i++) {
        int j,k,temp;
        char a[100];
        gets(a);
        if (a[0]>0) {   //排除gets空输入 gets是以回车结尾,接收回车前的内容 所以输完n回车会输入一个空
            for (j=0; j<strlen(a); j++) {
                for (k=0; k<strlen(a)-j; k++) {
                    if (a[k]<a[k+1]) {
                        temp=a[k];
                        a[k]=a[k+1];
                        a[k+1]=temp;
                    }
                }
            }
            printf("%s\n",a);
        }
        
    }
    return 0;
}
