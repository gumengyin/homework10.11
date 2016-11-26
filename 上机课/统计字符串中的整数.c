//
//  main.c
//  输出字符中整数
//
//  Created by 顾梦寅Joyce on 2016/11/26.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include<stdio.h>
#include <string.h>
int main()
{
    int n;
    for (n=0; n<100; n++) {
        
        char str[50],*pstr;
        int i=0,j=0,k,m,ndigit=0;
        long int e10,digit,a[100],*pa;
        gets(str);
        pstr=&str[0];
        pa=&a[0];
        while(*(pstr+i)!='\0')
        {
            if((*(pstr+i)>='0')&&(*(pstr+i)<='9'))
                j++;
            else
            {
                if(j>0)
                {
                    digit=*(pstr+i-1)-48;
                    k=1;
                    while(k<j)
                    {
                        e10=1;
                        for(m=1;m<=k;m++)
                            e10*=10;
                        digit+=(*(pstr+i-1-k)-48)*e10;
                        k++;
                    }
                    *pa=digit;
                    ndigit++;
                    pa++;
                    j=0;
                }
            }
            i++;
        }
        
        if(j>0)
        {
            digit=*(pstr+i-1)-48;
            k=1;
            while(k<j)
            {
                e10=1;
                for(m=1;m<=k;m++)
                    e10*=10;
                digit+=(*(pstr+i-1-k)-48)*e10;
                k++;
            }
            *pa=digit;
            ndigit++;
            j=0;
        }
        
        printf("%d||",ndigit);
        j=0;
        pa=&a[0];
        if (ndigit==0) {
            printf("NULL");
        }
        else
            for(j=0;j<ndigit;j++)
                printf("%ld ",*(pa+j));
        printf("\n");
    }
    return 0;
}

