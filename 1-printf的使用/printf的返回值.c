/**
* @ brief      ����printf()�����ķ���ֵ
* @ author     mculover666
* @ date
* @ encoding   GBK/GB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 232;
    int count = 0;

    count = printf("%d\n", i);
    printf("һ����ӡ��%d���ַ�.\n", count);

    system("pause");
    return 0;
}
/*
    ��Mingw-w64��������н����
    ------------------------------------
    232
    һ����ӡ��4���ַ�.
    �밴���������. . .
    ------------------------------------
*/