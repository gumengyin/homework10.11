//
//  main.c
//  考生成绩单
//
//  Created by 顾梦寅Joyce on 2016/12/12.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//
#include <stdio.h>
int main() {
    int i,j,n=0;
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
    for (i=0; i<10; i++) {
        scanf("%s ",student[i].name);
        if (student[i].name[0]=='e') {
            break;
        }
        scanf("%d %lf %lf %lf",&student[i].sno,&student[i].chinese,&student[i].english,&student[i].math);//数组scanf输入不用&
        student[i].sum=student[i].chinese+student[i].english+student[i].math;
        n=n+1;
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
    head=&student[0];
    for(i=0;i<n-1;i++){
        student[i].next=&student[i+1];
    }
    student[n-1].next=NULL;
    p=head;
    printf("[");
    do{
        printf("{name:%s,sum:%.f,sno:%d},",p->name,p->sum,p->sno);
        p=p->next;
    }while (p!=NULL);
    printf("]");
    return 0;
}
