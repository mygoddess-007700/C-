/*
时间：2020年10月17日09:09:56
功能：对++i与i++的探索 
*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	for (i=1; i<=4; i++)
	sum = sum + i;
	printf("sum = %d\n", sum);
	
	return 0;
}

/*
输出结果：
如果是++i：
sum = 10
如果是i++：
sum = 10
*/ 
