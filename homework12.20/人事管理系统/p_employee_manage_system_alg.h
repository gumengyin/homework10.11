//
//  p_employee_manage_system_alg.h
//  人事管理系统
//
//  Created by 顾梦寅Joyce on 2016/12/27.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#ifndef p_employee_manage_system_alg_h
#define p_employee_manage_system_alg_h
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
#endif/* p_employee_manage_system_alg_h */
