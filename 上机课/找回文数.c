//
//  main.c
//  找回文数
//
//  Created by 顾梦寅Joyce on 2017/1/1.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        char a[10];
        int b,j,k=0,l;
        scanf("%s%d",a,&b);
        int m=strlen(a)/2;
        for (j=0; ;j++) {
            a[m]=a[m]+1;
            for (l=0; l<=m; l++) {
                printf("%c",a[l]);
            }
            for (l=m-1; l>=0; l--) {
                printf("%c",a[l]);
            }
            k=k+1;
            if (k!=b) {
                printf(" ");
            }
            if (k==b) {
                printf("\n");
                break;
            }
        }
    }
    return 0;
}
