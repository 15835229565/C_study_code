/**
* @ brief       ����ĵ���
* @ author      mculover666
* @ date        2019��6��28��17:20:37
* @ encoding    GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

#define A_SIZE 5 

int reverse(int* a, int size);

int main(void)
{
    int a[A_SIZE] = {1,2,3,4,5};
    int i;

    reverse(a, A_SIZE);

    for(i = 0;i < A_SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}

/**
 * @ brief  ��������
 * @ param  int* - ����ĵ�ַ
 *          size - ����Ĵ�С
 * @ retval 0 - ok
 */
int reverse(int* a, int size)
{
    int i = 0,j = size - 1;
    int t = 0;

    while(i < j)
    {
        t = a[i];
        a[i++] = a[j];
        a[j--] = t;
    }

    return 0;
}
/*
    ��Mingw-w64��������н����
    ���Խ��1��
    ------------------------------------
    6 5 4 3 2 1
    �밴���������. . .
    ------------------------------------
    ���Խ��2��
    ------------------------------------
    5 4 3 2 1
    �밴���������. . .
    ------------------------------------   
*/