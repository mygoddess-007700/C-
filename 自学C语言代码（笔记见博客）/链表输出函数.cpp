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
