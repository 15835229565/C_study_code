/**
 * @ brief      ����strlen����
 * @ author     mculover666
 * @ date       2019��7��5��20:37:52
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[40] = "mculover666";

    printf("sizeof(name) = %d\n", sizeof(name));
    printf("strlen(name) = %d\n", strlen(name));
    
    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    sizeof(name) = 40
    strlen(name) = 11
    �밴���������. . .
    ------------------------------------
 */