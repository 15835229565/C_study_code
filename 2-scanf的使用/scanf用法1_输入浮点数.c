/**
* @ brief      ����scanf���븡����
* @ author     mculover666
* @ date       2019��6��25��10:47:11
* @ encoding   GBK/GB2312
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float i = 0.0;

    printf("������i��ֵ(������):");
    scanf("%f", &i);
    printf("i = %f\n", i);

    system("pause");
    return 0;
}

/*
    ��Mingw-w64��������н����
    ------------------------------------
    ������i��ֵ(������):1.23456789
    i = 1.234568
    �밴���������. . .
    ------------------------------------
*/

