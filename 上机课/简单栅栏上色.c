//
//  main.c
//  简单栅栏上色
//
//  Created by 顾梦寅Joyce on 2016/12/19.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//
/*我们有一个栅栏，它有m个柱子，现在要给柱子染色，有n种颜色可以染。
 必须保证任意连续k根的柱子不出现相同颜色（例如：连续4根柱子颜色为 r w b r, r出现了多次则视为重复）。求有多少种染色方案。
*/
#include <stdio.h>
int main() {
    int k,n,m,ways=1,i;
    scanf("%d %d %d",&m,&n,&k);
    int var=n;
    if (k>n) {
        printf("Input Error\n");
    }
    else{
        if (k<m) {
            for (i=0; i<k; i++) {
                ways=var*ways;
                var=var-1;
            }
            var=var+1;
            for (i=k; i<m; i++) {
                ways=ways*var;
            }
            printf("%d\n",ways);
        }
        if(k>=m){
            for (i=0; i<m; i++) {
                ways=var*ways;
                var=var-1;
            }
            printf("%d\n",ways);
        }
    }
    return 0;
}
