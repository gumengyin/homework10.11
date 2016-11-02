//
#include <stdio.h>
int Fun(int n);
int main() {
    int n,x;
    printf("Please input a number\n");
    scanf("%d",&n);
    x=Fun(n);
    printf("%d\n",x);
    return 0;
}
int Fun(int n){
    //浮点数赋给整型数据不会四舍五入
    int a,sum=0;
    int i=1,c;
    int y=n,z=n;
    while (y>=10) {
        i++;
        y=y/10;
    }
    while (n!=0) {
        int b=1;
        a=n%10;
        n=n/10;
        for (c=0; c<i; c++) {
            b=b*a;
        }
        sum=sum+b;
    }
    if (sum==z)
        return 1;
    else
        return 0;
}


