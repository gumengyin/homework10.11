//
//  main.c
//  调用系统时间算年龄
//
//  Created by 顾梦寅Joyce on 2016/12/8.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//
/*
 调用系统时间 输出格式为 Thu Dec  8 20:12:38 2016
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
    time_t timep;
    char s[30],date[30];
    time(&timep);
    strcpy(s,ctime(&timep));
    printf("当前时间 %s\n", s);
}
*/
struct tm{
    int tm_sec;  //代表目前秒数, 正常范围为0-59, 但允许至61 秒
    int tm_min;  //代表目前分数, 范围0-59
    int tm_hour;  //从午夜算起的时数, 范围为0-23
    int tm_mday;  //目前月份的日数, 范围01-31
    int tm_mon;  //代表目前月份, 从一月算起, 范围从0-11
    int tm_year;  //从1900 年算起至今的年数
    int tm_wday;  //一星期的日数, 从星期一算起, 范围为0-6
    int tm_yday;  //从今年1 月1 日算起至今的天数, 范围为0-365
    int tm_isdst;  //日光节约时间的旗标
};
#include <stdio.h>
#include <time.h>
int main(){
    time_t timep;
    struct tm *p;
    time(&timep);
    p = gmtime(&timep);
    int year,month,day,age;
    printf("please input your birthday\n");
    scanf("%d %d %d",&year,&month,&day);
    printf("present time:%d %d %d\n", (1900+p->tm_year), (1+p->tm_mon), (p->tm_mday));
    age=(1900+p->tm_year)-year;
    if((1+p->tm_mon)<month){
        age=age-1;
        printf("%d\n",age);
    }
    else
        printf("%d\n",age);
}
