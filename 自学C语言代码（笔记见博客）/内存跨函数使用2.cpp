# include <stdio.h>
# include <malloc.h>

void f(int ** q)
{
	*q = (int *)malloc(sizeof(int)); //sizeof���������ͣ�����ֵ�Ǹ����������ֽ�
									//�ȼ��� p = (int *)malloc(sizeof(int));
									
	//q = 5�� //error
	//*q = 5��//error p = 5;
	**q  = 5;   //*p = 5; (��Ϊ�Ƕ�̬���䣬���Բ����ͷ�)

}

int main(void)
{
	int * p;
	
	f(&p);
	printf("%d\n", *p);
	
	return 0;
}
