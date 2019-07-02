/**
 * @ brief      ����ָ�������������Ĺ�ϵ
 * @ author     mculover666
 * @ date       2019��7��1��15:03:46
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int i;
    int* p = a;

    //��ӡÿ��Ԫ�صĵ�ַ
    for(i = 0;i < 5;i++)
    {
        printf("a[%d] = %#X\n",i, &a[i]);
    }

    //ʹ��ָ������ÿ��Ԫ��
    for(i = 0;i < 5;i++)
    {
        printf("(p+%d) = %#X    *(p+%d) = %d\n",i, (p+i), i, *(p+i));
    }

    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    a[0] = 0X61FDF0
    a[1] = 0X61FDF4
    a[2] = 0X61FDF8
    a[3] = 0X61FDFC
    a[4] = 0X61FE00
    (p+0) = 0X61FDF0    *(p+0) = 1
    (p+1) = 0X61FDF4    *(p+1) = 2
    (p+2) = 0X61FDF8    *(p+2) = 3
    (p+3) = 0X61FDFC    *(p+3) = 4
    (p+4) = 0X61FE00    *(p+4) = 5
    �밴���������. . .
    ------------------------------------
 */