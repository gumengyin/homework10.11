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
int FUN(int k,char str1[],char str2[]){
    int i,j=0,m=0;
    for (i=k; i<strlen(str1);i++) {
        if (strlen(str2)==1) {
            if (str1[i]==str2[j]) {
                m=m+1;
            }
        }
        else if ((str1[i]==str2[j])&&((str1[i+1]==str2[j+1])||(str1[i-1]==str2[j-1]))) {
            j=j+1;
        }
        if (j==strlen(str2)) {
            k=k+1;
            FUN(k,str1,str2);
        }
    }
    if (strlen(str2)==1) {
        return m;
    }
    else
        return k;
}
int main() {
    char str1[100],str2[100];
    int m,n,k=0;
    gets(str1);
    gets(str2);
    if (strlen(str2)==1) {
        m=FUN(k,str1,str2);
    }
    else
        n=FUN(k,str1,str2);
    if (n==0){
        printf("NO\n");
    }
    else{
        if (strlen(str2)==1) {
            printf("%d",m);
        }
        else
            printf("%d",n);
    }
    return 0;
}
