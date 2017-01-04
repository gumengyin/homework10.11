//
//  main.c
//  数字翻转
//
//  Created by 顾梦寅Joyce on 2017/1/4.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int var1,var2=0,dig1,dig2=0,sum1,sum2,sum3=0;
        scanf("%d%d",&var1,&dig1);
        sum1=var1+dig1;
        while (var1!=0) {
            var2=var2*10+var1%10;
            var1=var1/10;
        }
        while (dig1!=0) {
            dig2=dig2*10+dig1%10;
            dig1=dig1/10;
        }
        sum2=var2+dig2;
        while (sum2!=0) {
            sum3=sum3*10+sum2%10;
            sum2=sum2/10;
        }
        if (sum1==sum3) {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
