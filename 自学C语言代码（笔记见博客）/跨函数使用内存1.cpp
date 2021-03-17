# include <stdio.h>

void f(int ** q) //q是个指针变量，无论q是什么类型的变量，却只占四个字节
{
	int i = 5;
	//*q等价于p ，q和**q都不等价于p
	//*q = i：//error 因为*q = i;等价于p = i;这样写是错误的
	*q = &i; //p = &i;	
}

int main(void)
{
	int * p; 
	
	f(&p);
	printf("%d\n", *p); //本语句语法没有问题，但逻辑上有问题 ，因为i空间已经释放了	 

	return 0;	
} 
