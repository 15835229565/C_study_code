/**
 * @ brief      ����һ����̬������ѧ����Ϣ�������ɼ��Ӵ�С�������
 * @ author     mculover666
 * @ date       2019��7��7��15:50:24
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    char  name[20];
    int   age;
    float score;
} stu;

int recv_msg(stu* st);
int show_msg(stu* st);
int bubble_msg(stu* st, int len);

int main(void)
{
    unsigned int len = 0;
    unsigned int i = 0;
    stu* st = NULL;

    printf("������Ҫ�洢ѧ���ĸ�����");
    scanf("%d", &len);

    st = (stu*)malloc(sizeof(stu)*len);

    for(i = 0; i < len; i++)
    {
        printf("�������%d��ѧ������Ϣ��\n", i+1);
        recv_msg(st+i);
    }
    printf("ѧ����Ϣ���£�\n");
    printf("         ����        |����|   �ɼ�\n");
    printf("----------------------------------------\n");
    for(i = 0; i < len; i++)
    {
        show_msg(st+i);
    }

    bubble_msg(st, len);

    printf("�����ѧ����Ϣ���£�\n");
    printf("         ����        |����|   �ɼ�\n");
    printf("----------------------------------------\n");
    for(i = 0; i < len; i++)
    {
        show_msg(st+i);
    } 

    free(st);
    system("pause");
    return 0;
}
int recv_msg(stu* st)
{
    printf("������ѧ��������");
    scanf("%s", st -> name);
    printf("������ѧ�����䣺");
    scanf("%d", &(st -> age));
    printf("������ѧ���ĳɼ���");
    scanf("%f", &(st -> score));

    return 0;
}
int show_msg(stu* st)
{
    printf("%-20s | %2d | %5.1f\n", st->name, st->age, st->score);
    
    return 0;
}
int bubble_msg(stu* st, int len)
{
    int i,j;
    stu t;

    for(i = 0;i < len - 1; i++)
    {
        for(j = 0; j < len - 1 - i; j++)
        {
            if(((st+j) -> score) < ((st+j+1) -> score))
            {
                t = *(st+j);
                *(st+j) = *(st+j+1);
                *(st+j+1) = t;
            } 
        }
    } 

    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    ������Ҫ�洢ѧ���ĸ�����5
    �������1��ѧ������Ϣ��
    ������ѧ��������aaa
    ������ѧ�����䣺1
    ������ѧ���ĳɼ���1
    �������2��ѧ������Ϣ��
    ������ѧ��������bbb
    ������ѧ�����䣺2
    ������ѧ���ĳɼ���2
    �������3��ѧ������Ϣ��
    ������ѧ��������ccc
    ������ѧ�����䣺3
    ������ѧ���ĳɼ���3
    �������4��ѧ������Ϣ��
    ������ѧ��������ddd
    ������ѧ�����䣺4
    ������ѧ���ĳɼ���4
    �������5��ѧ������Ϣ��
    ������ѧ��������eee
    ������ѧ�����䣺5
    ������ѧ���ĳɼ���5
    ѧ����Ϣ���£�
            ����        |����|   �ɼ�
    ----------------------------------------
    aaa                  |  1 |   1.0
    bbb                  |  2 |   2.0
    ccc                  |  3 |   3.0
    ddd                  |  4 |   4.0
    eee                  |  5 |   5.0
    �����ѧ����Ϣ���£�
            ����        |����|   �ɼ�
    ----------------------------------------
    eee                  |  5 |   5.0
    ddd                  |  4 |   4.0
    ccc                  |  3 |   3.0
    bbb                  |  2 |   2.0
    aaa                  |  1 |   1.0
    �밴���������. . .
    ------------------------------------
 */