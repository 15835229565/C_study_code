/**
 * @ brief      �仯��̬һά����ĳ���
 * @ author     mculover666
 * @ date       2019��7��1��16:03:04
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int  len = 0;
    int* pArr = NULL;
    int  i;

    //��̬��������
    printf("����������ĳ���:");
    scanf("%d", &len);
    pArr = (int*)malloc(sizeof(int) * len);
    if(pArr == NULL)
    {
        printf("���鹹��ʧ��\n");
        return -1;
    }
    printf("��̬���鹹���ɹ�(pArr = %#X)\n", pArr);

    //��ʼ�ı�����ĳ���
    for(i = 0; i < 2; i++)
    {
        printf("�������µĳ���:");
        scanf("%d", &len);
        pArr = (int*)realloc(pArr,sizeof(int) * len);
        if(pArr == NULL)
        {
            printf("���鳤�ȸı�ʧ��\n");
            return -1;
        }
        printf("�µĶ�̬���鹹��ɹ�(pArr = %#X)\n", pArr);
    }
    
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
    ��̬���鹹���ɹ�(pArr = 0XC11420)
    �������µĳ���:1
    �µĶ�̬���鹹��ɹ�(pArr = 0XC11420)
    �������µĳ���:10
    �µĶ�̬���鹹��ɹ�(pArr = 0XC11420)

    ��̬����ռ����ͷ�(pArr = 0XC11420)
    �밴���������. . .
    ------------------------------------
 */