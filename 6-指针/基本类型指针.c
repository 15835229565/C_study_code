/**
 * @ brief      ��������ָ���ʹ��
 * @ author     mculover666
 * @ date       2019��6��30��16:30:04
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 88;
    int j = 0;

    int*p;  //����һ��ָ�����p�����ڱ���int���ͱ���i��ֵ
    
    p = &i; //��i�ĵ�ַ����ָ�����p��ʹpָ��i

    j = *p; //*p��ʾ������p������Ϊ��ַ�ı������ȼ���j = i;

    printf("i = %d  j = %d\n", i ,j);
    printf("p = %p  &i = %#X\n", p, &i);
    
    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    i = 88  j = 88
    p = 000000000061FE0C  &i = 0X61FE0C
    �밴���������. . .    
    ------------------------------------
 */