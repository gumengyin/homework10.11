#include<stdio.h>
int main(void)
{
    double a,b,c;
    printf("请给a,b赋值\n");
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    c=-a;
    printf("-a=%lf\n",c);
    c=-b;
    printf("-b=%lf\n",c);
    c=a+b;
    printf("a+b=%lf\n",c);
    c=a/b;
    printf("a/b=%lf\n",c);
    printf("a%b=不合法\n");
    c=a>=b;
    printf("a>=b=%lf\n",c);
    c=a>0&&!b!=0;
    printf("a>0&&!b!=0的值为%lf\n",c);
    c=a>0,b>0;
    printf("a>0,b>0的值为%lf\n",c);
    printf("a>>b%32的值 不合法\n");
    printf("a&b=不合法\n");
    c=a*=b;
    printf("a*=b的值为%lf\n",c);
    c=sizeof(a);
    printf("sizeof(a)=%lf\n",c);
    return 0;
}
