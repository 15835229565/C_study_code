/**
 * @ brief      ����Ĺ���
 * @ author     mculover666
 * @ date       2019��7��8��10:12:26
 * @ encoding   GBK/GHB2312
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    //������
    int data;

    //ָ���� �� ָ����һ���ڵ�
    struct node* nextNode;  
} Node;

Node* createList(int len);
int traverse(Node* pHead);
int freeList(Node* pHead);

int main(void)
{
    //����ͷָ��
    Node* pHead = NULL;
    int len = 0;

    //�����û�����ڵ����
    printf("�������������Ч�ڵ����:");
    scanf("%d", &len);
    
    //��������
    pHead = createList(len);

    //�����������
    traverse(pHead);

    //�ͷ�����ռ�õĴ洢�ռ�
    freeList(pHead);

    system("pause");
    return 0;
}
/**
 * @ brief    ��̬����һ����ѭ��������
 * @ param    len - ��Ч�ڵ�ĸ���
 * @ retval   �ɹ�-���������ַ
 */
Node* createList(int len)
{
    int i = 0;
    Node* pHead = NULL;     //ָ��ͷ�ڵ�
    Node* pTail = NULL;     //ָ��β�ڵ�
    Node* pNew = NULL;      //ָ���´����Ľڵ�

    //����һ���������Ч���ݵ�ͷ�ڵ㣬�������ַ���ظ�ͷ�ڵ��ָ��
    pHead = (Node*)malloc(sizeof(Node));
    //���ͷ����Ƿ����ɹ�
    if(NULL == pHead)
    {
        printf("ͷ������ʧ�ܣ��������\n");
        exit(-1);
    }

    //��ͷ�ڵ���Ϊβ�ڵ㣬�����һ��������
    pHead->nextNode = NULL;
    pTail = pHead;

    //ѭ��������Ч�ڵ�
    for(i = 0; i < len; i++)
    {
        //����һ���µĽڵ�
        pNew = (Node*)malloc(sizeof(Node));
        if(NULL == pNew)
        {
            printf("��Ч�ڵ����ʧ�ܣ��������\n");
            exit(-1);
        }

        //�����û��������Ч�ڵ������
        printf("�������%d����Ч�ڵ��ֵ:", i+1);
        scanf("%d", &(pNew -> data));


        //���µĽڵ���Ϊβ�ڵ����(�ص�)
        pNew->nextNode  = NULL;
        pTail -> nextNode = pNew;
        pTail = pNew;
    }

    //���������
    printf("�������ɹ�\n");
    return pHead;
}
/**
 * @ breif  �����������
 * @ param  pHear - ����ͷָ��
 * @ retval ��
 */
int traverse(Node* pHead)
{
    Node* p = pHead -> nextNode;

    while(NULL != p)
    {
        printf("%d ", p->data);
        p = p->nextNode;
    }
    printf("\n");

    return 0;
}
/**
 * @ brief  �ͷŶ�̬����ռ�õĿռ�
 * @ param  pHead-����ͷָ��λ��
 * @ retval ��
 */
int freeList(Node* pHead)
{
    Node* p = pHead;
    Node* t = NULL;
    int i = 0;

    while(NULL != p)
    {
        t = p->nextNode;
        free(p);
        p = t;
        printf("�ͷŵ�%d������ڵ�\n",(i++)+1);
    }
    return 0;
}
/**
    ��Mingw-w64��������н����
    ------------------------------------
    �������������Ч�ڵ����:5
    �������1����Ч�ڵ��ֵ:1
    �������2����Ч�ڵ��ֵ:2
    �������3����Ч�ڵ��ֵ:3
    �������4����Ч�ڵ��ֵ:4
    �������5����Ч�ڵ��ֵ:5
    �������ɹ�
    1 2 3 4 5
    �ͷŵ�1������ڵ�
    �ͷŵ�2������ڵ�
    �ͷŵ�3������ڵ�
    �ͷŵ�4������ڵ�
    �ͷŵ�5������ڵ�
    �ͷŵ�6������ڵ�
    �밴���������. . .
    ------------------------------------
 */