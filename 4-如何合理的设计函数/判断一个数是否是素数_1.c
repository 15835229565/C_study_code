/**
* @ brief       �ж�һ�����Ƿ�������
* @ author      mculover666
* @ date        2019��6��28��14:46:13
* @ encoding    GBK/GB2312
* @ note        ����������������Ϊ�ڴ���1����Ȼ���У�����1�����������ⲻ��������������
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 0;
    int i;

    printf("������һ������:");
    scanf("%d", &num);

    for(i = 2;i < num;i++)
    {
        if(num % i == 0)
            break;
    }
    if(i == num)
        printf("%d ������.\n", num);
    else
        printf("%d ��������.\n", num);
    
    system("pause");
    return 0;
}
/*
    ��Mingw-w64��������н����
    ------------------------------------
    ������һ������:13
    13 ������.
    �밴���������. . .
    ------------------------------------
*/