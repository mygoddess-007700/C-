# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5]; //���intռ4���ֽڵĻ����򱾺����ܹ�������20���ֽڣ�ÿ�ĸ��ֽڱ�������һ��int������ʹ�� 
	int len;
	int * pArr;
	int i;
	
	//��̬�Ĺ���һά���� 
	printf("��������Ҫ��ŵ�Ԫ�صĸ�����\n");
	scanf("%d", &len);
	pArr = (int *)malloc(4 * len); //���ж�̬������һ��һά����
								//��һά����ĳ�����len�� ��һά����Ԫ�ص�����������int
								//����������� int pArr[len];
	
	//��һά������в��� �磺�Զ�̬һά������и�ֵ
	for(i=0; i<len; ++i)
		scanf("%d", &pArr[i]);
		
	//��һά����������
	printf("һά����������ǣ�\n");
	for(i=0; i<len; ++i)
		printf("%d\n", pArr[i]);
		
	free(pArr); // �ͷŵ���̬�������ֵ 
	
	return 0; 
}

// realloc(pArr��100); //��ζ�Ű�ԭ������100���ֽ� 
