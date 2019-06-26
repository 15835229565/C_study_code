/**
* @ brief      ���Ը�����������η���ʹ��
* @ author     mculover666
* @ date       2019��6��25��15:40:54
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float i = 3852.99;

    printf("*%f*\n", i);
    printf("*%e*\n", i);
    printf("*%4.2f*\n", i);
    printf("*%3.1f*\n", i);
    printf("*%10.3f*\n", i);
    printf("*%10.3e*\n", i);
    printf("*%+4.2f*\n", i);
    printf("*%010.2f*\n", i);

    system("pause");
    return 0;
}
/*
    ��Mingw-w64��������н����
    ------------------------------------
    *3852.989990*
    *3.852990e+003*
    *3852.99*
    *3853.0*
    *  3852.990*
    *3.853e+003*
    *+3852.99*
    *0003852.99*
    �밴���������. . .
    ------------------------------------
*/