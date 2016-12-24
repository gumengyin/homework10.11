//
//  main.c
//  8-3
//
//  Created by 顾梦寅Joyce on 2016/12/24.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    double digit[8];
    FILE *fp;
    int i;
    for (i=0; i<8; i++) {
        scanf("%lf",&digit[i]);
    }
    fp=fopen("data.dat", "wb+");
    for (i=0; i<8; i++) {
        fprintf(fp,"%lf ",digit[i]);
    }
    for (i=0; i<8; i++) {
        fscanf(fp,"%lf",&digit[i]);
    }
    for (i=0; i<8; i++) {
        printf("%lf ",digit[i]);
    }
    return 0;
}
