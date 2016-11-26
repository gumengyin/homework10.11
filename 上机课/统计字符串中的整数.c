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
    char str[50],*pstr;
    int i=0,j=0,k,m,n=0,e10,digit,ndigit=0,a[100],*pa;
    while(gets(str)!=NULL){
        pstr=&str[0];/*字符串指针指向字符串首地址*/
        pa=&a[0];/*数字指针指向数组首地址*/
        for (i=0; i<strlen(str); i++) {
            if (str[i]>=48&&str[i]<=57) {
                n=n+1;
            }
        }
        if (n==strlen(str)) {
            printf("1||");
            for (i=0; i<strlen(str); i++) {
                printf("%c",str[i]);
            }
        }
        else  {
            while(*(pstr+i)!='\0')
            {
                if((*(pstr+i)>='0')&&(*(pstr+i)<='9'))/*如果是数字，则开始计数*/
                    j++;
                else
                {
                    if(j>0)/*当上一个字符是数字，当前字符是非数字时*/
                    {
                        digit=*(pstr+i-1)-48;/*先计算出最后一个数字*/
                        k=1;
                        while(k<j)/*依次计算其他位上的数字*/
                        {
                            e10=1;
                            for(m=1;m<=k;m++)/*按照数字应有的位置乘以相应的幂次方*/
                                e10*=10;
                            digit+=(*(pstr+i-1-k)-48)*e10;
                            k++;
                        }
                        *pa=digit;/*将本次计算出来的数字存入数组*/
                        ndigit++;/*数字个数增1*/
                        pa++;
                        j=0;
                    }
                }
                i++;/*字符串指针往后移动一位*/
            }
            if(j>0)/*如果字符串是以数字结束的*/
            {
                digit=*(pstr+i-1)-48;
                k=1;
                while(k<j){
                    e10=1;
                    for(m=1;m<=k;m++){
                        e10*=10;
                        digit+=(*(pstr+i-1-k)-48)*e10;
                        k++;
                    }
                    *pa=digit;
                    ndigit++;
                    j=0;
                }
            }
            printf("%d||",ndigit);
            j=0;
            pa=&a[0];
            if (ndigit==0) {
                printf("NULL");
            }
            for(j=0;j<ndigit;j++){/*输出数字*/
                printf("%d ",*(pa+j));
            }
            printf("\n");
        }
    }
    
    return 0;
}
