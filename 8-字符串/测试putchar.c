/**
 * @ brief      ����putchar
 * @ author     mculover666
 * @ date       2019��7��5��16:08:17
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch = 'A';
    int ret = 0;

    ret = putchar(ch);
    printf("ret = %d (char)ret = %c", ret, ret);

    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    Aret = 65 (char)ret = A�밴���������. . .
    ------------------------------------
 */