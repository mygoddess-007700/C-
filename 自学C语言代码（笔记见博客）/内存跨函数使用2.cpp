# include <stdio.h>
# include <malloc.h>

void f(int ** q)
{
	*q = (int *)malloc(sizeof(int)); //sizeof（数据类型）返回值是该数据类型字节
									//等价于 p = (int *)malloc(sizeof(int));
									
	//q = 5； //error
	//*q = 5；//error p = 5;
	**q  = 5;   //*p = 5; (因为是动态分配，所以不会释放)

}

int main(void)
{
	int * p;
	
	f(&p);
	printf("%d\n", *p);
	
	return 0;
}
