//
//  p_employee_manage_system_alg.c
//  人事管理系统
//
//  Created by 顾梦寅Joyce on 2016/12/27.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include "p_employee_manage_system_alg.h"
extern FILE *fp;
void AddData(void){
    EmployeeType employee;
    char tag;
    employee.status=0;
    do{
        printf("编号：");
        scanf("%s",employee.num);
        printf("姓名：");
        scanf("%s",employee.name);
        printf("性别：");
        scanf("%s",employee.sex);
        printf("生日：\n");
        printf("\t年：");
        scanf("%d",&employee.birthday.year);
        printf("\t月：");
        scanf("%d",&employee.birthday.month);
        printf("\t日：");
        scanf("%d",&employee.birthday.day);
        printf("基本工资：");
        scanf("%f",&employee.basicSalary);
        fseek(fp,0, SEEK_END);
        fwrite(&employee, sizeof(EmployeeType), 1, fp);
        printf("能继续添加吗（y/n）:");
        while (getchar()!='\n')
        tag=getchar();
        tag=tolower(tag); //大写字母转化为小写字母
        while (tag!='y'&&tag!='n') {
            printf("输入非法，重新输入（y/n）:");
            while (getchar()!='\n')
                tag=getchar();
            tag=tolower(tag);
        }
    } while(tag=='y');
}
int main() {
    
    printf("Hello, World!\n");
    return 0;
}
