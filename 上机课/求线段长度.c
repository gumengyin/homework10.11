//  main.c
//  求线段长度
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//一条数轴上有n个点，任意两点连线得到n(n-1)/2条线段，试求线段的总长。

//输入 一个正整数n，表示点的个数。后面的n个数分别代表一个整数Xi(0<i<=n)，表示点的坐标。其中，1<n<=10000，0<=Xi<=1000000000。注意：不考虑输入非法的情况。重合的点也算两个点

#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    long long digit[n],length=0,diff;
    for (i=0; i<n; i++) {
        scanf("%lld",&digit[i]);
    }
    for (i=0; i<n-1; i++) {
        for (j=i+1; j<n; j++) {
            diff=digit[j]-digit[i];
            if (diff<0) {
                diff=-diff;
            }
            length=length+diff;
        }
    }
    printf("%lld\n",length);
    return 0;
}
//用数学公式直接求绝对值
/*
 #include<stdio.h>
 #include<math.h>
 
 int main()
 {
	int n,i,j;
	long long a[10010],sum=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
 scanf("%lld",&a[i]);
	for (i=0;i<n-1;i++)
 for (j=i+1;j<n;j++)
 sum+=abs(a[j]-a[i]);
	printf("%lld\n",sum);
	return 0;
 }
 */
