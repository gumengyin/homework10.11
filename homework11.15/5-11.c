//
//  main.c
//  5-11
//
//  Created by 顾梦寅Joyce on 2016/12/12.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int i;
    char str[11]="About Time";
    char *p=str;
    puts(p);
    printf("%s\n",p);
    for (i=0; i<11; i++) {
        printf("%c",*(p+i));
    }
    printf("\n");
    for (i=0; i<11; i++) {
        printf("%c",*(str+i));
    }
    printf("\n");
    for (i=0; i<11; i++) {
        printf("%c",p[i]);
    }
    printf("\n");
    for (i=0; i<11; i++) {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
