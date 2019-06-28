/**
* @ brief       ���һ����Χ�����е�����
* @ author      mculover666
* @ date        2019��6��28��15:15:21
* @ encoding    GBK/GB2312
* @ note        ����������������Ϊ�ڴ���1����Ȼ���У�����1�����������ⲻ��������������
*/
#include <stdio.h>
#include <stdlib.h>

int is_prime(int num);
void dis_prime(int num);

int main(void)
{
    int num = 0;

    printf("������һ������1������:");
    scanf("%d", &num);

    dis_prime(num);
   
    system("pause");
    return 0;
}

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

/**
 * @ breif  ���һ����Χ�����е�����
 * @ param  int
 * @ retval ��
 */
void dis_prime(int num)
{
    int i = 0, count = 0;

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
}
/*
    ��Mingw-w64��������н����
    ------------------------------------
    ������һ������1������:250
    2    3    5    7   11   13   17   19
    23   29   31   37   41   43   47   53
    59   61   67   71   73   79   83   89
    97  101  103  107  109  113  127  131
    137  139  149  151  157  163  167  173
    179  181  191  193  197  199  211  223
    227  229  233  239  241
    �밴���������. . .
    ------------------------------------
*/