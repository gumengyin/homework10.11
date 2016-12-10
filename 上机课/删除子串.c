//
//  main.c
//  删除子串
//
//  Created by 顾梦寅Joyce on 2016/12/5.
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
    int i,j,m=0;
    gets(str1);
    gets(str2);
    for (i=0; i<strlen(str1);i++) {
       // for (j=0; j<strlen(str2); j++) {
            if (strlen(str2)==1) {
                if (str1[i]==str2[j]) {
                    m=m+1;
                }
            }
            else if ((str1[i]==str2[j])&&((str1[i+1]==str2[j+1])||(str1[i-1]==str2[j-1]))) {
                m=m+1;
                j=j+1;
            }
       // }
    }
    if (m==strlen(str1)) {
        printf("NULL\n");
    }
    else if (m<strlen(str2)){
        printf("NO\n");
    }
    else{
        j=0;
        for (i=0; i<strlen(str1);i++) {
            if (strlen(str2)==1) {
                if (str1[i]==str2[j]) {
                    j=j+1;
                }
                else
                    printf("%c",str1[i]);
            }
            else {
                if ((str1[i]==str2[j])&&((str1[i+1]==str2[j+1])||(str1[i-1]==str2[j-1]))) {
                    j=j+1;
                }
                else
                    printf("%c",str1[i]);
            }
        }
    }
    return 0;
}
