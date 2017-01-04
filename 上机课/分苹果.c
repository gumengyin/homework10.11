//
//  main.c
//  分苹果
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//假设n个人合伙去采摘苹果，摘完后都疲惫不堪，于是各自找地方睡了。第二天日上三竿，第一个人醒来，他将苹果分为n份，把多余的1个苹果扔掉后，拿走了自己的一份。第二个人醒来，也将苹果分为n份，把多余的1个苹果扔掉后，拿走了自己的一份。其他人依次醒来后，也按同样的方法拿走苹果。问他们合伙至少摘了多少苹果，并按顺序输出这n人各自拿走的苹果个数。


#include <stdio.h>
int main() {
    int sum,i,j,n;
    int flag=0;
    scanf("%d",&n);
    int a[n];
    for (sum=10; ; sum++) {
        j=sum;
        i=0;
        while ((j-1)%n==0) {
            a[i]=(j-1)/n;
            i=i+1;
            if (i==n) {
                printf("%d\n",sum);
                flag=1;
            }
            else
                j=(j-1)*(n-1)/n;
            }
            if (flag) {
                break;
            }
        }
        if (flag){
            for (i=0; i<n; i++) {
                printf("%d\n",a[i]);
        }
    }
    return 0;
}
