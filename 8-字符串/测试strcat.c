/**
 * @ brief      ����ʹ��strcat�����ַ�����ƴ��
 * @ author     mculover666
 * @ date       2019��7��5��20:47:05
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* strncat(char* dest, const char* src, size_t count);

int main(void)
{
    char name[40] = "mculover666";
    char say[20]  = "Hello,world";

    printf("ƴ��ǰ:\n");
    printf("name = %s say = %s\n", name, say);

    strcat(name, say);
    printf("ƴ�Ӻ�:\n");
    printf("name = %s say = %s\n", name, say);
    
    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    ƴ��ǰ:
    name = mculover666 say = Hello,world
    ƴ�Ӻ�:
    name = mculover666Hello,world say = Hello,world
    �밴���������. . .
    ------------------------------------
 */