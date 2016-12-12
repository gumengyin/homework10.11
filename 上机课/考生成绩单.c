//
//  main.c
//  考生成绩单
//
//  Created by 顾梦寅Joyce on 2016/12/12.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//
#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    struct student{
        char name[21];//姓名
        int sno;//学号
        double chinese;//语文
        double english;//英语
        double math;//数学
        double sum;//总成绩
    };
    struct student student[n];
    struct student temp;
    for (i=0; i<n; i++) {
        scanf("%s %d %lf %lf %lf",student[i].name,&student[i].sno,&student[i].chinese,&student[i].english,&student[i].math);//数组scanf输入不用&
        student[i].sum=student[i].chinese+student[i].english+student[i].math;
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n-i; j++) {
            if (student[j].sum<student[j+1].sum) {
                temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }//冒泡排序法 第二个循环把小标的值比较一遍
    }//第一个循环第二个循环的数再比较一遍
    for (i=0; i<n; i++) {
        if (student[i].sum==student[i+1].sum) {
            if (student[i].name[0]>student[i+1].name[0]) {
                temp=student[i];
                student[i]=student[i+1];
                student[i+1]=temp;
            }
        }
    }
    for (i=0; i<n; i++) {
        printf("[name:%s,sum:%.f,sno:%d]\n",student[i].name,student[i].sum,student[i].sno);
    }
    return 0;
}
