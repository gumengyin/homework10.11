//
//  main.c
//  实现strlen
//
//  Created by 顾梦寅Joyce on 2016/12/5.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    gets(str);
    printf("%zu\n",strlen(str));
    return 0;
}
