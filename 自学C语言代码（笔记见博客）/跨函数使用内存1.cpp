# include <stdio.h>

void f(int ** q) //q�Ǹ�ָ�����������q��ʲô���͵ı�����ȴֻռ�ĸ��ֽ�
{
	int i = 5;
	//*q�ȼ���p ��q��**q�����ȼ���p
	//*q = i��//error ��Ϊ*q = i;�ȼ���p = i;����д�Ǵ����
	*q = &i; //p = &i;	
}

int main(void)
{
	int * p; 
	
	f(&p);
	printf("%d\n", *p); //������﷨û�����⣬���߼��������� ����Ϊi�ռ��Ѿ��ͷ���	 

	return 0;	
} 
