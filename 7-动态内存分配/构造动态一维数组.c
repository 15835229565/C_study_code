/**
 * @ brief      ����һ����̬��һά����
 * @ author     mculover666
 * @ date       2019��7��1��15:30:09
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int len = 0;
    int *pArr = NULL;
    int i = 0;

    printf("����������ĳ���:");
    scanf("%d", &len);

    //��̬��������
    pArr = (int*)malloc(sizeof(int) * len);
    if(pArr == NULL)
    {
        printf("���鹹��ʧ��\n");
        return -1;
    }
    printf("��̬���鹹���ɹ�(pArr = %#X)\n", pArr);

    //���û��Զ�̬���鸳ֵ
    for(i = 0; i< len;i++)
        scanf("%d", pArr+i);
    
    //��ӡ��̬����
    for(i = 0; i < len; i++)
        printf("p[%d] = %d ", i, *(pArr+i));
    
    //�ͷŶ�̬����Ŀռ�
    free(pArr);
    printf("\n��̬����ռ����ͷ�(pArr = %#X)\n", pArr);

    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    ����������ĳ���:5
    ��̬���鹹���ɹ�(pArr = 0XC31420)
    11 25 -66 2 88
    p[0] = 11 p[1] = 25 p[2] = -66 p[3] = 2 p[4] = 88
    ��̬����ռ����ͷ�(pArr = 0XC31420)
    �밴���������. . .
    ------------------------------------
 */