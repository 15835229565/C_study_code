/**
 * @ brief      �ַ��������뷽��2-gets
 * @ author     mculover666
 * @ date       2019��7��5��11:02:33
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[40];
    char* ptr = NULL;

    printf("�������������:\n");
    ptr = gets(name);
    printf("���������:name = %s *ptr = %s\n", name, ptr);
    
    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    �������������:
       mculover666
    ���������:name =   mculover666 *ptr =   mculover666
    �밴���������. . .
    ------------------------------------
 */