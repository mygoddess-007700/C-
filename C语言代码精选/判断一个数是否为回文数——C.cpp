# include <stdio.h>
int main(void)
{
	int a, m;
	int sum = 0;
	printf("������һ����λ���������������ж����Ƿ�Ϊ������\n");
	scanf("%d", &a);
	
	m = a;
	while(m)
	{
		sum = sum * 10 + m % 10;
		m /= 10;
	}
	
	if(sum == a)
		printf("Yes!\n");
	else
		printf("No!\n");
		
	return 0;
}
