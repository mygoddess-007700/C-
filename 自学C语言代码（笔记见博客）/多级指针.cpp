# include <stdio.h>

int main(void)
{
	int i = 10;
	int * p = &i; //pֻ�ܴ��int���͵ĵ�ַ 
	int ** q = &p; //qֻ�ܴ��int *���͵ĵ�ַ 
	int *** r = &q;
	
	//r = &p; //error
	 
	
	return 0;
}
