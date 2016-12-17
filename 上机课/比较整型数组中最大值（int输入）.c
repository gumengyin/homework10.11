//
//  main.c
//  动态数组输入
//
//  Created by 顾梦寅Joyce on 2016/12/17.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main( int argc, char *argv[] )
{
    int i,j,k=0,t,n,a[10],b[10];
    for(n=0;n<10;n++)
    {
        scanf("%d",&a[n]);
        k++;
        if(getchar()=='\n')
            break;
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            
        }
    }
    k=0;
    for(n=0;n<10;n++)
    {
        scanf("%d",&b[n]);
        k++;
        if(getchar()=='\n')
            break;
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k-1;j++)
        {
            if(b[j]<b[j+1])
            {
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
            
        }
    }
    if (a[0]>b[0]) {
        printf("%d",a[0]);
    }
    else
        printf("%d",b[0]);
    printf("\n");
    return 0;
}
