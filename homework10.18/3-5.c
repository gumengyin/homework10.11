//
//  main.c
//  3-5
//
//  Created by 顾梦寅Joyce on 16/10/24.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a,b;
    for(a=2;a<=100;a++)
    {
        for(b=2;b<a;b++)
        {
        if(a%b==0)
        {
            break;
        }
            if(b==a-1)
            printf("素数%d\n",a);
        }
    }
    return 0;
}
