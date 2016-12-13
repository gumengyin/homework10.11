//
//  main.c
//  6-5~6-8
//
//  Created by 顾梦寅Joyce on 2016/12/13.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    struct staff {
        int sno;
        char name[21];
        char sex[3];
        char identity[20];
        int salary;
        char address[100];
        char time[15];
    };
    int i,j;
    double sum=0,average;
    struct staff staff[8];
    struct staff temp;
    for (i=0; i<8; i++) {
        scanf("%d %s %s %s %d %s %s",&staff[i].sno,staff[i].name,staff[i].sex,staff[i].identity,&staff[i].salary,staff[i].address,staff[i].time);
        printf("%d %s %s %s %d %s %s",staff[i].sno,staff[i].name,staff[i].sex,staff[i].identity,staff[i].salary,staff[i].address,staff[i].time);
    }
    for (i=0; i<8; i++) {
        sum=sum+staff[i].salary;
    }
    average=sum/8;
    for (i=0; i<8; i++) {
        for (j=0; j<8-i; j++) {
            if (staff[j].salary<staff[j+1].salary) {
                temp=staff[j];
                staff[j]=staff[j+1];
                staff[i]=temp;
            }
        }
    }
    printf("\n工资最高\n%d %s %s %s %d %s %s",staff[0].sno,staff[0].name,staff[0].sex,staff[0].identity,staff[0].salary,staff[0].address,staff[0].time);
    printf("\n工资总和：%.1f",sum);
    printf("\n平均工资：%.1f",average);
    return 0;
}
