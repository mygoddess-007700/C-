# include <stdio.h>
# include <malloc.h>
# include <stdlib.h> //����exit

struct Node
{
	int date; //������
    struct Node * pNext; //ָ����
};

//��������
struct Node * create_list(void);
void traverse_list(struct Node *);

int main(void)
{
    struct Node * pHead = NULL; //�ȼ���struct Node * pHead = NULL;

    pHead = create_list(); //create_list()���ܣ�����һ����ѭ��������
    traverse_list(pHead);
    
    return 0;
}

struct Node * create_list(void)
{
    int len; //���������Ч�ڵ�ĸ���
    int i;
    int val; //������ʱ����û�����Ľ���ֵ

    //������һ���������Ч���ݵ�ͷ���
    struct Node * pHead = NULL;
    pHead = (struct Node *)malloc(sizeof(struct Node));
    if(NULL == pHead)
    {
        printf("����ʧ�ܣ�������ֹ");
        exit(-1); //��ֹ����
    }
    struct Node * pTail = pHead;
    pTail->pNext = NULL;

    printf("����������Ҫ���ɵ�����ڵ�ĸ�����len = ");
    scanf("%d", &len);

    for(i=0; i<len; ++i)
    {
        printf("�������%d���ڵ��ֵ��", i+1);
        scanf("%d", &val);

        struct Node * pNew = NULL;
        pNew = (struct Node *)malloc(sizeof(struct Node));
        if(NULL == pNew)
        {
            printf("����ʧ�ܣ�������ֹ");
            exit(-1);
        }
        pNew->date = val;
        pTail->pNext = pNew;
        pNew->pNext = NULL;
        pTail = pNew;
    }

    return pHead;
}

void traverse_list(struct Node * pHead)
{
/*
	if( empty_list(pHead) )
	{
		printf("����Ϊ��");
	}
*/
//ע��ԭ������������������������ʹ��while��ʹ���ֿ�����Ҳ��������κ�����	

	struct Node * p = pHead->pNext;
	
	while(NULL != p)
	{
		printf("%d\n", p->date);
		p = p->pNext;	
	} 
	return;
}
