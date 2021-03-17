# include <stdio.h>
int main(void)
{
	int a, m;
	int sum = 0;
	printf("请输入一个五位数，计算机会帮你判断其是否为回文数\n");
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
