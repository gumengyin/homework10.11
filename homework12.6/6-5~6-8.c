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
    };
    struct staff staff;
    scanf("%d %s %s %s %d %s",&staff.sno,staff.name,staff.sex,staff.identity,&staff.salary,staff.address);
    printf("%d %s %s %s %d %s",staff.sno,staff.name,staff.sex,staff.identity,staff.salary,staff.address);
    return 0;
}
