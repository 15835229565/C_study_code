/**
* @ brief      scanf�������Ʋ���
* @ author     mculover666
* @ date       2019��6��25��13:08:34
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    char ch;

    printf("������i��ֵ(����)��");
    scanf("%d", &i);

    printf("������ch��ֵ(�ַ�)");
    scanf("%c", &ch);

    printf("i = %d, ch = %c\n", i ,ch);

    system("pause");
    return 0;
}

/*
    ��Mingw-w64��������н����
    ------------------------------------
    ������i��ֵ(����)��123m
    ������ch��ֵ(�ַ�)i = 123, ch = m
    �밴���������. . .
    ------------------------------------
*/