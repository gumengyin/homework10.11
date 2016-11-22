#include <stdio.h>
int Fun(int a,int m,int n);
int main() {
    int y,i;
    int a,m,n;
    scanf("%d", &y);
    for (i = 0; i < y; i++)
    {
        scanf("%d %d %d",&a,&m,&n);
        Fun(a,m,n);
    }
    return 0;
    
}
int Fun(int a,int m,int n){
    int x;
    if ((m%2!=0)&&m<=7) {
        if (m>2) {
            x=((m-1)/2)*61+n-1;
        }
        else
            x=((m-1)/2)*61+n;
    }
    else if ((m%2==0)&&m<=8){
        if (m>2) {
            x=(m/2)*31+((m-2)/2)*30+n-1;
        }
        else
            x=(m/2)*31+((m-2)/2)*30+n;
    }
    else if ((m%2!=0)&&m>7){
        x=244+((m-9)/2)*61+n;
    }
    else if ((m%2==0)&&m>8){
        x=244+((m-8)/2)*30+((m-10)/2)*31+n;
    }
    if ((a%4==0&&a%100!=0)||(a%400==0)) {
        printf("%d\n",x);
    }
    else printf("%d\n",x-1);
    return 0;
}
