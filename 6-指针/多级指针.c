/**
 * @ brief      �༶ָ����Գ���
 * @ author     mculover666
 * @ date       2019��7��2��09:57:54
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 10;
    int* p = &i;    //ָ�����p���int���ͱ����ĵ�ַ
    int** q = &p;   //ָ�����q���int*���ͱ����ĵ�ַ
    int*** r = &q;  //ָ�����r���int**���ͱ����ĵ�ַ

    printf("***r = %d\n", ***r);    //*ptr��ʾ��ptr������Ϊ��ַ�ı���
    
    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    ***r = 10
    �밴���������. . .
    ------------------------------------
 */