/*
时间：2020年10月17日12:16:14
功能：常规下对++i和i++的探索 
*/ 
# include <stdio.h>

int main(void) 
{
	int i = 1;
	int m, z;
	//m = ++i;
	z = i++;
	//printf("m = %d\n", m);
	printf("z = %d\n", z);
	
	return 0;
}
/*
输出结果：
现在z = 1 
如果同样操作输出m，则m = 2 
*/
