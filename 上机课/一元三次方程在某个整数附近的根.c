//
//  main.c
//  一元三次方程在某个整数附近的根
//
//  Created by 顾梦寅Joyce on 2017/1/6.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    float solve(float a, float b, float c, float d, float x);
    float a, b, c, d, k;
    printf("Please input a b c d k:\n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &k);
    
    printf("Output:\nThe root is:%.4f\n", solve(a, b, c, d, k));
    return 0;
}
float solve(float a, float b, float c, float d, float x) {
    while (fabs(a * x * x * x + b * x * x + c * x + d) > 1e-6) {
        x = x - (a * x * x * x + b * x * x + c * x + d) / (3 * a * x * x + 2 * b * x + 3 * c);
    }
    return x;
}
