//
//  main.c
//  求大于m且紧靠m的k个素数
//
//  Created by 顾梦寅Joyce on 2017/1/2.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int m,k,j,a,b=0;
        scanf("%d%d",&m,&k);
        j=m+1;
        while (b<k) {
            for (a=2; a<j; a++) {
                if (j%a==0) {
                    break;
                }
                if (a==j-1) {
                    printf("%d ",a);
                    b=b+1;
                }
            }
            j=j+1;
        }
    }
    return 0;
}
