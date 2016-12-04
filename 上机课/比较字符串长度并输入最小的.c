//
//  main.c
//  比较字符串长度并输入最小的
//
//  Created by 顾梦寅Joyce on 2016/11/28.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//另一个思路 gets存入数组 然后用strlen

/*#include <stdio.h>
#include <string.h>
int main() {
    int i=0;
    char a[50];
    while (gets(&a[i])!=NULL) {
            i++;
    }
    if (i<2||i>10) {
        printf("Input Error\n");
    }
    else{
        
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i=0,b,j,m;
    char a[100][100];int c[10];
    for(;;)
    {
        gets(a[i]);
        if(a[i][0]=='\0')
            break;
        i++;
    }
    b=i;
    if(b==1||b>10)
        printf("Input Error\n");
    else
    {
        
        for(i=0;i<b;i++)
        {
            m=0;
            for(j=0;j<100;j++)
            {
                if(a[i][j]!='\0')
                {
                    m++;
                    continue;
                }
                else
                    break;
            }
            c[i]=m;
        }
        for(i=0;i<b;i++)
        {
            m=0;
            for(j=0;j<b;j++)
            {
                if(c[i]>c[j])
                {
                    m=1;
                    break;
                }
            }
            if(m==0)
            {
                puts(a[i]);
            }
            
        }
    }
    return 0;
}
