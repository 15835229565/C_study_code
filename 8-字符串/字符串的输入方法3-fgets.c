/**
 * @ brief      �ַ��������뷽��3-gets
 * @ author     mculover666
 * @ date       2019��7��5��11:26:48
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

#define LEN 40
int main(void)
{
    char name[LEN];
    char* ptr = NULL;

    printf("�������������:\n");
    ptr = fgets(name, LEN, stdin);
    printf("���������: name = %s, *ptr = %s\n", name, ptr);

    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    �������������:
    mculover666
    ���������: name = mculover666
    , *ptr = mculover666

    �밴���������. . .
    ------------------------------------
 */