//
//  main.c
//  统计该子串在母串中出现的次数
//
//  Created by 顾梦寅Joyce on 2016/12/7.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

//
//  main.c
//  删除子串
//
//  Created by 顾梦寅Joyce on 2016/12/5.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char str1[100],str2[100];
    int i,j=0,m=0,k=0,n,a=0;
    gets(str1);
    gets(str2);
    if (strlen(str2)==1) {
        for (i=k; i<strlen(str1);i++){
            if (str1[i]==str2[j]) {
                m=m+1;
            }
        }
    }
    else {
        for (n=0;n<3;n++) { //无意义 只是预设循环数
            for (i=k; i<strlen(str1);i++) {
                if ((str1[i]==str2[j])&&((str1[i+1]==str2[j+1])||(str1[i-1]==str2[j-1]))) {
                    m=m+1;
                    j=j+1;
                }
                if (j==strlen(str2)) {
                    k=i-j+2;
                    a=a+1;
                    j=0;
                }
            }
        }
    }
    if (m<strlen(str2)){
        printf("NO\n");
    }
    else{
        if (strlen(str2)==1) {
            printf("%d\n",m);
        }
        else
            printf("%d\n",a);
    }
    return 0;
}
