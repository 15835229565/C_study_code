/**
 * @ brief      �ṹ��Ķ����ʹ��
 * @ author     mculover666
 * @ date       2019��7��7��11:47:40
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char  name[20];
    int   age;
    float score;
};

int main(void)
{
    struct Student st1;
    struct Student* ptr = &st1;


    strcpy(st1.name, "mculover666");
    st1.age  = 21;
    st1.score = 88.5;
    
    printf("st1.name = %s\n", st1.name);
    printf("st1.age = %d\n", st1.age);
    printf("st1.score = %.1f\n", st1.score);

    printf("ptr -> name = %s\n", ptr -> name);
    printf("ptr -> age = %d\n", ptr -> age);
    printf("ptr -> score = %.1f\n", ptr -> score); 

    system("pause");
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    st1.name = mculover666
    st1.age = 21
    st1.score = 88.5
    ptr -> name = mculover666
    ptr -> age = 21
    ptr -> score = 88.5
    �밴���������. . .
    ------------------------------------
 */