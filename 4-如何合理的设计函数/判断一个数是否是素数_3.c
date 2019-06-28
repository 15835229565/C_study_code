/**
* @ brief       ���һ����Χ�����е�����
* @ author      mculover666
* @ date        2019��6��28��15:04:45
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
    int i;
    int count = 0;

    printf("������һ������1������:");
    scanf("%d", &num);


    for(i = 2;i <= num; i++)
    {
        if(0 == is_prime(i))
        {
            printf("%4d ", i);
            count++;
            if(count == 8)
            {
                printf("\n");
                count = 0;
            }
        }
    }
    printf("\n");

    system("pause");
    return 0;
}
/*
    ��Mingw-w64��������н����
    ------------------------------------
    ������һ������1������:200
    2    3    5    7   11   13   17   19
    23   29   31   37   41   43   47   53
    59   61   67   71   73   79   83   89
    97  101  103  107  109  113  127  131
    137  139  149  151  157  163  167  173
    179  181  191  193  197  199
    �밴���������. . .
    ------------------------------------
*/