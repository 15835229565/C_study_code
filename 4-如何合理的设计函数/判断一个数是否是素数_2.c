/**
* @ brief       �ж�һ�����Ƿ�������
* @ author      mculover666
* @ date        2019��6��28��14:58:19
* @ encoding    GBK/GB2312
* @ note        ����������������Ϊ�ڴ���1����Ȼ���У�����1�����������ⲻ��������������
*/
#include <stdio.h>
#include <stdlib.h>

/**
 * @ breif  �ж�һ�����Ƿ�������
 * @ param  int
 * @ retval int: 0-ok -1-fail
 */
int is_prime(int num)
{
    int i;

    for(i = 2;i < num;i++)
    {
        if(num % i == 0)
            break;
    }
    if(i == num)
        return 0;
    else
        return -1;
}

int main(void)
{
    int num = 0;

    printf("������һ������:");
    scanf("%d", &num);

   if(-1 == is_prime(num))
       printf("%d ��������.\n", num);
    else
        printf("%d ������.\n", num);
    
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