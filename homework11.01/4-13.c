//
//  main.c
//  4-13
//
//  Created by 顾梦寅Joyce on 2016/11/4.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
void Coprime(int m,int n);//void代表没有返回值函数
int main(void) {
    int m,n;
    printf("please input two number\n");
    scanf("%d%d",&m,&n);
    Coprime(m, n);
    return 0;
}
void Coprime(int m,int n){
    int x,y=m,z=n;
    while (m!=n) {
    if (m>n)
        m=m-n;
    else if(n>m)
        n=n-m;
    }
    if (m==1) {
        x=y*z;
        printf("%d",x);
    }
    else{
        printf("最大公约数：%d\n",m);
        printf("最小公倍数：%d\n",(z/m)*(y/m)*m);
    }
}
/*
求最大公约数算法：
(1)辗转相除法
两整数a和b：
① a%b得余数c
② 若c=0，则b即为两数的最大公约数，结束
③ 若c≠0，则a=b，b=c，再回去执行①
(2)相减法
两整数a和b：
① 若a>b，则a=a-b
② 若a<b，则b=b-a
③ 若a=b，则a（或b）即为两数的最大公约数，结束
④ 若a≠b，则再回去执行①
(3)穷举法：
① i= a b中的小数
② 若a，b能同时被i整除，则i即为最大公约数，结束
③ i--，再回去执行
*/
