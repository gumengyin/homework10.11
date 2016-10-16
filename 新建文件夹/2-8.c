#include<stdio.h>
int main(void)
{
    int a;
    //为什么定义变量b不能在前面
    printf("请输入一个整数值\n");
    scanf("%d",&a);
    int b=a*a*a;
    printf("a^3=%d",b);
    return 0;
} 
