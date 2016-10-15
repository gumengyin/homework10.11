#include <stdio.h>
int main(void)
{
	double f;
	printf("请输入一个温度值\n华氏温度f=");
	scanf("%lf",&f);
	double c=5/9*(f-32);
	printf("摄氏温度c=%lf",c);
	return 0;
}
