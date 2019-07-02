/**
 * @ brief      ����ָ����򡪡�������������
 * @ author     mculover666
 * @ date       2019��7��2��10:32:32
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int swap1(int a, int b);
int swap2(int* a, int* b);
int swap3(int* a, int* b);

int main(void)
{
    int a = 10, b = 20;

    printf("����ǰ: a = %d, b = %d\n", a, b);
    swap1(a, b);
    printf("������: a = %d, b = %d\n", a, b);

    printf("����ǰ: a = %d, b = %d\n", a, b);
    swap2(&a, &b);
    printf("������: a = %d, b = %d\n", a, b);

    printf("����ǰ: a = %d, b = %d\n", a, b);
    swap3(&a, &b);
    printf("������: a = %d, b = %d\n", a, b);

    system("pause");
    return 0;
}
/**
 * @ note   ��Ч�����ܽ����������������ֻ���
 */
int swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return 0;
}
/**
 * @ note   ��Ч��������a������b�����ĵ�ַ��ֵû�б�
 */
int swap2(int* a, int* b)
{
    int* temp = a;
    a = b;
    b = temp;
    return 0;
}
/**
 * @ note   ��Ч����������������a������b������ֵ
 */
int swap3(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    ����ǰ: a = 10, b = 20
    ������: a = 10, b = 20
    ����ǰ: a = 10, b = 20
    ������: a = 10, b = 20
    ����ǰ: a = 10, b = 20
    ������: a = 20, b = 10
    �밴���������. . .
    ------------------------------------
 */