void traverse_list(struct Node * pHead)
{
/*
	if( empty_list(pHead) )
	{
		printf("链表为空");
	}
*/
//注释原因是如果下面输出链表代码如果使用while则即使出现空链表也不会输出任何内容	

	struct Node * p = pHead->pNext;
	
	while(NULL != p)
	{
		printf("%d\n", p->date);
		p = p->pNext;	
	} 
	return;
}
