//
//  main.c
//  统计该子串在母串中出现的次数
//
//  Created by 顾梦寅Joyce on 2016/12/7.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char str1[100],str2[100];
    int i,j,m=0;
    gets(str1);
    gets(str2);
    for (i=0; i<strlen(str1);i++) {
        for (j=0; j<strlen(str2); j++) {
            if (strlen(str2)==1) {
                if (str1[i]==str2[j]) {
                    m=m+1;
                }
            }
            else if ((str1[i]==str2[j])&&((str1[i+1]==str2[j+1])||(str1[i-1]==str2[j-1]))) {
                m=m+1;
            }
        }
    }
    if ((m<2)&&(strlen(str2)>1)){
        printf("NO\n");
    }
    else
        
    return 0;
}
