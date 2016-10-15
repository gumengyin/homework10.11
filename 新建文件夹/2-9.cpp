#include<stdio.h>
int main(void)
{
	double x,y; 
	printf("请输入变量x:x=");
	scanf("%lf",&x);
	printf("请输入变量y:y=");
	scanf("%lf",&y);
	double a,b,c,d;
	a=x+y;
	b=x-y;
	c=x*y;
	d=x/y;
	printf("x+y=%lf\n",a);
	printf("x-y=%lf\n",b);
	printf("x*y=%lf\n",c);
	printf("x/y=%lf\n",d);
	int m=(int)x;
	int n=(int)y;
	int z=m%n;
	printf("x%y=%d",z);
	return 0;
 } 
