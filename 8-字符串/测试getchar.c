/**
 * @ brief      ����getchar
 * @ author     mculover666
 * @ date       2019��7��5��16:08:17
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch = 0;

    printf("������һ���ַ�:");
    ch = getchar();    
    printf("��������ַ���:%c\n", ch);
    
    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    ������һ���ַ�:a
    ��������ַ���:a
    �밴���������. . .
    ------------------------------------
 */