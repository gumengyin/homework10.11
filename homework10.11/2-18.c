#include <stdio.h>

int main(void )
{
    int a;
    a=sizeof(int);
    printf("sizeof(int)=%d\n",a);
    a=sizeof(double);
    printf("sizeof(double)=%d\n",a);
    a=sizeof(char);
    printf("sizeof(char)=%d\n",a);
    a=sizeof(float);
    printf("sizeof(int)=%d\n",a);
    a=sizeof(short);
    printf("sizeof(int)=%d\n",a);
    a=sizeof(long double);
    printf("sizeof(int)=%d\n",a);
    a=sizeof(long);
    printf("sizeof(int)=%d\n",a);
    return 0;
}
