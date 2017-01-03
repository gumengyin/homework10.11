//
//  main.c
//  计算平均分
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    struct student{
        int number;
        double score;
        double minus;
    };
    int n,number,i,j;
    double average,sum=0;
    scanf("%d%d",&n,&number);
    struct student student[n];
    struct student temp;
    for (i=0; i<n; i++) {
        if (i==0) {
            student[i].number=number;
        }
        else
            student[i].number=student[i-1].number+1;
        scanf("%lf",&student[i].score);
        sum=sum+student[i].score;
    }
    average=sum/n;
    for (i=0; i<n; i++) {
        student[i].minus=student[i].score-average;
        if (student[i].minus<0) {
            student[i].minus=-student[i].minus;
        }
    }
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (student[j].minus>student[j+1].minus) {
                temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }
    }
    printf("%.1f\n",average);
    for (i=0; i<n; i++ ) {
        if (student[i].minus<student[i+1].minus) {
            printf("%d\n",student[i].number);
            break;
        }
        if (student[i].minus==student[i+1].minus||student[i].minus==student[i-1].minus) {
            printf("%d\n",student[i].number);
        }
    }
    return 0;
}
