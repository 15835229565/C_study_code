/**
* @ brief      �����ַ�������������η���ʹ��
* @ author     mculover666
* @ date       2019��6��25��16:10:47
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

#define STR "mculover666"

int main(void)
{
    printf("*%s*\n", STR);
    printf("*%15s*\n", STR);
    printf("*%-15s*\n", STR);
    printf("*%15.6s*\n", STR);
    printf("*%-15.6s*\n", STR);
    
    system("pause");
    return 0;
}
/*
    ��Mingw-w64��������н����
    ------------------------------------
    *mculover666*
    *    mculover666*
    *mculover666    *
    *         mculov*
    *mculov         *
    �밴���������. . .
    ------------------------------------
*/