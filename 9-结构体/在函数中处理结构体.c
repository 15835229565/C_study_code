/**
 * @ brief      �ں����д���ṹ��
 * @ author     mculover666
 * @ date       2019��7��7��15:25:59
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char  name[20];
    int   age;
    float score;
};

int recv_msg(struct Student* st);
int show_msg(struct Student* st);

int main(void)
{
    struct Student st1;

    recv_msg(&st1);
    show_msg(&st1);
    
    system("pause");
    return 0;
}
int recv_msg(struct Student* st)
{
    printf("������ѧ��������");
    scanf("%s", st -> name);
    printf("������ѧ�����䣺");
    scanf("%d", &(st -> age));
    printf("������ѧ���ĳɼ���");
    scanf("%f", &(st -> score));

    return 0;
}
int show_msg(struct Student* st)
{
    printf("%-20s %2d %5.1f\n", st->name, st->age, st->score);
    
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    ������ѧ��������mculover666
    ������ѧ�����䣺21
    ������ѧ���ĳɼ���88.8
    mculover666          21  88.8
    �밴���������. . .
    ------------------------------------
 */