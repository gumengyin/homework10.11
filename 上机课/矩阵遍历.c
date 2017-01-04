//
//  main.c
//  矩阵遍历
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int s,n;
    scanf("%d%d",&s,&n);
    int i,j,var[s][n];
    for (i=0; i<s; i++) {
        for (j=0; j<n; j++) {
            scanf("%d",&var[i][j]);
        }
    }
    for (i=0; i<s; i++) {
        for (j=0; j<n; j++) {
            printf("%d ",var[i][j]);
        }
        printf("\n");
    }
    int up=0,down=s-1;
    int left=0,right=n-1;  //上左右下看作矩阵边界
    i=up,j=left;
    int t=1;
    while(1){
        while(i != down+1){  //向下输出
            printf("%d",var[i][j]);
            t++;
            i++;
            if((t-1) != (s*n))
                printf(" ");
        }
        i--;
        if((t-1) == (s*n)){
            printf("\n");
            break;
        }
        left++;
        j=left;
        while(j != right+1){ //横向右输出
            printf("%d",var[i][j]);
            t++;
            j++;
            if((t-1) != (s*n))
                printf(" ");
        }
        j--;
        if((t-1) == (s*n)){
            printf("\n");
            break;
        }
        down--;
        i=down;
        while(i != up-1){  //向上输出
            printf("%d",var[i][j]);
            t++;
            i--;
            if((t-1) != (s*n))
                printf(" ");
        }
        i++;
        if((t-1) == (s*n)){
            printf("\n");
            break;
        }
        right--;
        j=right;
        while(j != left-1){  //横向左输出
            printf("%d",var[i][j]);
            t++;
            j--;
            if((t-1) != (s*n))
                printf(" ");
        }
        j++;
        if((t-1) == (s*n)){
            printf("\n");
            break;
        }
        up++;
        i=up;
    }
    return 0;
}
