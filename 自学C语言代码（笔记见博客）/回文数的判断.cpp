/*
2020.11.11 16��20��
�ǵõ��ں���==������= 
*/
# include <stdio.h>
int main(void)
{
	int n, sum, x;
	sum = 0;
	printf("������һ�������������˵�����Ƿ�Ϊ������\n");
	scanf("%d", &x);
	n = x;
	//printf("x = %d\n", x);
	
	while(n)
	{
		sum = sum * 10 + n%10;
		n = n/10;
	} 
	//printf("sum = %d\n", sum);
	//printf("n =%d\n", n);
	
	if(sum == x)
	{
		printf("Yes\n");
	}
	else
		printf("No\n");
		
	return 0;
}
