//
//  main.c
//  人事管理系统
//
//  Created by 顾梦寅Joyce on 2016/12/21.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//
#ifdef _P_EMPLOYEE_MANAGE_SYSTEM_ALG_H_
#define _P_EMPLOYEE_MANAGE_SYSTEM_ALG_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct{
    int year;
    int month;
    int day;
}DateType;
typedef struct {
    short status;
    char num[11];
    char name[11];
    char sex[3];
    DateType birthday;
    float basicSalary;
}EmployeeType;
void AddData(void);
void UpdateData(void);
void SearchData(void);
void DeleteData(void);
void Pack(void);
#endif
#include "p_employee_manage_system_alg.h"
extern FILE *fp;
void AddData(void){
    EmployeeType employee;
    char tag;
    employee.status=0;
    do{
        printf("编号：");
        scanf("%s",employee.num);
        printf("编号：");
        scanf("%s",employee.num);
        printf("编号：");
        scanf("%s",employee.num);
        printf("编号：");
        scanf("%s",employee.num);
    }
}
int main() {
    
    printf("Hello, World!\n");
    return 0;
}
