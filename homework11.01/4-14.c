//
//  main.c
//  4-14
//
//  Created by 顾梦寅Joyce on 2016/11/5.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int Fun(int m,int n);
int main(void) {
    int m,n;
    printf("请输入日期\n");
    scanf("%d %d",&m,&n);
    printf("%d月%d日\n",m,n);
    Fun(m,n);
    printf("\n");
    return 0;
}
int Fun(int m,int n){
    int x;
    if ((m%2!=0)&&m<=7) {
        if (m>2) {
            x=((m-1)/2)*61+n-1;
        }
        else
            x=((m-1)/2)*61+n;
    }
    else if ((m%2==0)&&m<=8){
        if (m>2) {
            x=(m/2)*31+((m-2)/2)*30+n-1;
        }
        else
            x=(m/2)*31+((m-2)/2)*30+n;
    }
    else if ((m%2!=0)&&m>7){
        x=244+((m-9)/2)*61+n-1;
    }
    else if ((m%2==0)&&m>8){
        x=244+((m-8)/2)*30+((m-10)/2)*31+n-1;
    }
    printf("第%d天",x);
    return 0;
}
