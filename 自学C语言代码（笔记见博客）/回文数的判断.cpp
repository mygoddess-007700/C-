/*
2020.11.11 16点20分
记得等于号是==而不是= 
*/
# include <stdio.h>
int main(void)
{
	int n, sum, x;
	sum = 0;
	printf("请输入一个数，计算机会说明它是否为回文数\n");
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
