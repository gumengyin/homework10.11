//
//  main.c
//  百钱百鸡
//
//  Created by 顾梦寅Joyce on 2016/12/19.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//中国古代数学家张丘建在他的《算经》中提出了一个著名的“百钱百鸡问题”：鸡翁一，值钱5，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问翁、母、雏各几何？

#include <stdio.h>
int main() {
    int money;
    scanf("%d",&money);
    int a,b,c,flag=0;
    for (a=0; a<money; a++) {
        for (b=0; b<money; b++) {
            for (c=0; c<money;c++) {
                if (c%3==0) {
                    if ((5*a+3*b+c/3==money)&&(a+b+c==money)) {
                        printf("%d %d %d\n",a,b,c);
                        flag=1;
                    }
                }
            }
        }
    }
    if (flag==0) {
        printf("NO\n");
    }
    return 0;
}
