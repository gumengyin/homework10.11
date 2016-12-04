//
//  main.c
//  查找一个字符串中最长的单词
//
//  Created by 顾梦寅Joyce on 2016/12/4.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1000];
    char*p[10000];
    int i=0,j,m,n,s=0;
    do
    {
        scanf("%c",&ch[i]);
        i++;
    }while(ch[i-1]!='\n');
    ch[i-1]='\0';
    
    for(;ch[0]!='e'||ch[1]!='x'||ch[2]!='i'||ch[3]!='t'||ch[4]!='\0';)
    {
        for(n=0;n<i-1;n++)
        {
            if(((int)ch[n]>=65&&(int)ch[n]<=90)||((int)ch[n]>=97&&(int)ch[n]<=122)||(int)ch[n]==32)
                s++;
        }
        if(s==i-1)
        {
            
            int b=0;
            p[b]=strtok(ch," ");
            do
            {
                if(p[b])
                    
                    b++;
                p[b]=strtok(NULL," ");
            }while(p[b]);
            
            for(i=0;i<b;i++)
            {
                m=0;
                for(j=0;j<b;j++)
                {
                    if(strlen(p[i])<strlen(p[j]))
                    {
                        m=1;
                        break;
                    }
                }
                if(m==0)
                    
                    printf("%s,",p[i]);
            }
            printf("\n");
        }
        else
        {
            printf("Input Error\n");
        }
        i=0,s=0;
        do
        {
            scanf("%c",&ch[i]);
            i++;
        }while(ch[i-1]!='\n');
        ch[i-1]='\0';
        
        
    }
    printf("End Of Input\n");
    
    return 0;
}
