/**
 * @ brief      ����scanf��������
 * @ author     mculover666
 * @ date       2019��6��25��10:47:30
 * @ encoding   GBK/GB2312
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;

    printf("������i��ֵ(����):");
    scanf("%d", &i);
    printf("i = %d\n", i);

    system("pause");
    return 0;
}
/*
    ��Mingw-w64��������н����
    ------------------------------------
    ������i��ֵ(����):100
    i = 100
    �밴���������. . .
    ------------------------------------
 */
