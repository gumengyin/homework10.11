//
//  main.c
//  冒泡排序法
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
void bubble_sort(int a[], int n) //这里可以不用确定数组长度
{
    int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)      //冒泡排序 标准的方法 n-j-1避免了数组最后一个为空造成的错误
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
}

int main()
{
    int number[8] = {95, 45, 15, 78, 84, 51, 24, 12};
    int i;
    bubble_sort(number, 8);//number是怎么传回来的 所以是number等价于a 调用函数排序后直接是改变了数组number
    for (i = 0; i < 8; i++)
    {//number改成a则错误
        printf("%d ", number[i]);   //为什么输出会正确呢 这里的number和a是怎么联系
    }
    printf("\n");
}
