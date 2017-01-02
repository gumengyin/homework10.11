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
        for(j=m+1;j<=1000;j++)
        {
            if(j==2)
                printf("%d ",j);
            else
                for(a=2;a<j;a++){
                    if(j%a==0){
                        break;
                    }
                    if(a==j-1){
                        printf("%d ",j);
                        b=b+1;
                    }
                }
            if (b==k) {
                break;
            }
        }
        
    }
    return 0;
}
