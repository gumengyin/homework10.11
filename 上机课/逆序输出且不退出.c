//
//  main.c
//  将输入实数逆序输出
//
//  Created by 顾梦寅Joyce on 2016/11/21.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
void InverseOut(int n);
int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        InverseOut(n);
    }
    return 0;
}
void InverseOut(int n){
    int i;
    float a[n],b[n];
    for (i=0;i<n;i++) {
        scanf("%f",&a[i]);
    }
    for (i=0;i<n;i++) {
        b[n-i-1]=a[i];
    }
    for (i=0;i<n;i++) {
        float m=b[i];
        int a=(int)b[i];
        float b = m-a;
        if (i<n-1) {
            if (b!=0) {
                printf("%.1f ",m);
            }
            else
                printf("%d ",a);
        }
        else if (i==n-1){
            if (b>0) {
                printf("%.1f \n",m);
            }
            else
                printf("%d \n",a);
        }
    }
}
