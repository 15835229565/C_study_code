/**
* @ brief       ����C���Ե����ֵ����
* @ author      mculover666
* @ date        2019��6��27��09:44:17
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = -3;

    do
    {
        if(i)
        {
            printf("%d is true\n", i);
        }
        else
        {
            printf("%d is false\n", i);
        }
    }while(++i <= 3);

    system("pause");
    return 0;
}
/*
    ��Mingw-w64��������н����
    ------------------------------------
    -3 is true
    -2 is true
    -1 is true
    0 is false
    1 is true
    2 is true
    3 is true
    �밴���������. . .
    ------------------------------------
*/