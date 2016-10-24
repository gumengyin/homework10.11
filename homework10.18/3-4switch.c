//
//  main.c
//  3-4 switch
//
//  Created by 顾梦寅Joyce on 16/10/24.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>

#include <stdio.h>
int JudgeCharacterType(int ch);
int main(void) {
    int c;
    printf("请输入一串字符\n");
    c=getchar();
    JudgeCharacterType(c);
    printf("The ASCII of %c'is%d\n\n",c,c);
    return 0;
}
int JugdeCharacterType(int ch)
{
    switch(ch)
    {
        case '0':case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
            printf("%c:数字个数为",ch);
            break;
    }
    return ch;
}
