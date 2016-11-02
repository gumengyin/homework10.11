//
//  main.c
//  算两数之间奇数和
//
//  Created by 顾梦寅Joyce on 2016/10/31.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n, i;
    int a, b,c;
    printf("请选择需要输入的数据组数\n");
    scanf("%d", &n);
    printf("输入   输出\n",n);
    for (i = 0; i < n; i++)
    {
        int d=0;
        scanf("%d %d",&a,&b);
        if (a<=0||b<=0)
            printf("error");
        else if (a>0&&b>0){
            for (c=a;c<=b;c++)
            {
                if (c%2!=0)
                    d=d+c;
            }
        }
        printf("        %d",d);
    }
    return 0;
    
}
