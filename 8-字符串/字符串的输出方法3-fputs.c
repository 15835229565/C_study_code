/**
 * @ brief      �ַ������������3-fputs
 * @ author     mculover666
 * @ date       2019��7��5��15:54:52
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
int putchar(int ch);

#include <stdlib.h>

#define MSG1    "mculover666"
#define MSG2    "hello,world"

int main(void)
{
    int count1 = 0, count2 = 0;

    count1 = fputs(MSG1, stdout);
    count2 = fputs(MSG2, stdout);
    printf("count1 = %d, count2 = %d.\n", count1, count2);

    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    mculover666hello,worldcount1 = 0, count2 = 0.
    �밴���������. . .
    ------------------------------------
 */