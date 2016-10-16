#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("请给a,b赋值\n");
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
    c=a>0&&!b!=0;
    printf("a>0&&!b!=0的值为%d\n",c);
    c=a>0,b>0;
    printf("a>0,b>0的值为%d\n",c);
    c=a>>b%32;
    printf("a>>b%32的值为%d\n",c);
    c=a&b;
    printf("a&b=%d\n",c);
    c=a*=b;
    printf("a*=b的值为%d\n",c);
    c=sizeof(a);
    printf("sizeof(a)=%d\n",c);
    return 0;
}
