#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("���a,b��ֵ\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	c=-a;
	printf("-a=%d\n",c);
	c=-b;
	printf("-b=%d\n",c);
	c=a+b;
	printf("a+b=%d\n",c);
	c=a/b;
	printf("a/b=%d\n",c); 
	c=a%b;
	printf("a%b=%d\n",c);
	c=a>=b;
	printf("a>=b=%d\n",c);
	return 0;
}
