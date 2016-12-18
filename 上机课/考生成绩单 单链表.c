//
//  main.c
//  考生成绩单
//
//  Created by 顾梦寅Joyce on 2016/12/12.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int i,j,n=0,flag;
    struct student{
        char name[21];//姓名
        int sno;//学号
        double chinese;//语文
        double english;//英语
        double math;//数学
        double sum;//总成绩
        struct student *next;
    };
    struct student student[10],*head,*p;
    struct student temp;
    while (scanf("%s",student[n].name)==1) {
        if (strcmp(student[n].name,"exit")!=0) {
            scanf("%d",&student[n].sno);
            scanf("%lf",&student[n].chinese);
            scanf("%lf",&student[n].english);
            scanf("%lf",&student[n].math);
            student[n].sum=student[n].chinese+student[n].english+student[n].math;
            n++;
        }
        else{
            flag=0;
            break;
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n-i; j++) {
            if (student[j].sum<student[j+1].sum) {
                temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }
    }
    for (i=0; i<n; i++) {
        if (student[i].sum==student[i+1].sum) {
            if (student[i].name[0]>student[i+1].name[0]) {
                temp=student[i];
                student[i]=student[i+1];
                student[i+1]=temp;
            }
        }
    }
    head=&student[0];
    for(i=0;i<n-1;i++){
        student[i].next=&student[i+1];
    }
    student[n-1].next=NULL;
    p=head;
    printf("[");
    do{
        printf("{name:%s,sum:%.f,sno:%d}",p->name,p->sum,p->sno);
        p=p->next;
        if (p!=NULL) {
            printf(",");
        }
    }while (p!=NULL);
    printf("]");
    return 0;
}
