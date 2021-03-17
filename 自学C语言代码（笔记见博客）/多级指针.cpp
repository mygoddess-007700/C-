# include <stdio.h>

int main(void)
{
	int i = 10;
	int * p = &i; //p只能存放int类型的地址 
	int ** q = &p; //q只能存放int *类型的地址 
	int *** r = &q;
	
	//r = &p; //error
	 
	
	return 0;
}
