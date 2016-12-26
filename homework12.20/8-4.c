//
//  main.c
//  8-4
//
//  Created by 顾梦寅Joyce on 2016/12/26.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    char a;
    FILE *fp;
    fp=fopen("test.txt", "wt");
    scanf("%c",&a);
    a=getchar();
    while (a!='\n') {
        switch(a)
        {
            case'a':
                a='A';
                fputc(a, fp);
                break;
            case'b':
                a='B';
                fputc(a, fp);
                break;
            case'c':
                a='C';
                fputc(a, fp);
                break;
            case'd':
                a='D';
                fputc(a, fp);
                break;
            case'e':
                a='E';
                fputc(a, fp);
                break;
            case'F':
                a='F';
                fputc(a, fp);
                break;
            case'g':
                a='G';
                fputc(a, fp);
                break;
            case'h':
                a='H';
                fputc(a, fp);
                break;
            case'i':
                a='I';
                fputc(a, fp);
                break;
            case'j':
                a='J';
                fputc(a, fp);
                break;
            case'k':
                a='K';
                fputc(a, fp);
                break;
            case'l':
                a='L';
                fputc(a, fp);
                break;
            case'm':
                a='M';
                fputc(a, fp);
                break;
            case'n':
                a='N';
                fputc(a, fp);
                break;
            case'o':
                a='O';
                fputc(a, fp);
                break;
            case'p':
                a='P';
                fputc(a, fp);
                break;
            case'q':
                a='Q';
                fputc(a, fp);
                break;
            case'r':
                a='R';
                fputc(a, fp);
                break;
            case's':
                a='S';
                fputc(a, fp);
                break;
            case't':
                a='T';
                fputc(a, fp);
                break;
            case'u':
                a='U';
                fputc(a, fp);
                break;
            case'v':
                a='V';
                fputc(a, fp);
                break;
            case'w':
                a='W';
                fputc(a, fp);
                break;
            case'x':
                a='X';
                fputc(a, fp);
                break;
            case'y':
                a='Y';
                fputc(a, fp);
                break;
            case'z':
                a='Z';
                fputc(a, fp);
                break;
        }
        a=getchar();
    }
    return 0;
}
