/**
* @ brief       ����scanf�ķ���ֵ
* @ author      mculover666
* @ date        2019��6��27��08:49:15
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i1 = 0, i2 = 0, i3 = 0;
    int result = 0;

    printf("������3��������");
    result = scanf("%d %d %d", &i1, &i2, &i3);

    printf("i1 = %d i2 = %d i3 = %d\n", i1, i2, i3);
    printf("result = %d\n", result);

    system("pause");
    return 0;
}
/*
    ��Mingw-w64��������н����
    ------------------------------------
    ������3��������12 154 23
    i1 = 12 i2 = 154 i3 = 23
    result = 3
    �밴���������. . .
    ------------------------------------
*/