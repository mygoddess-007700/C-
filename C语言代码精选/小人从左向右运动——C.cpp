/*
ʱ�䣺2020��10��4��20:16:21
���ܣ��������й��ɵ�С�˴��������˶� 
�ջ�system("cls");   
���ܣ�����a��b��������whileѭ�� 

*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int a,b;
	a=0;
	system("color 0a");
	while(a<=3)
	{
		b=1;
		system("cls");
		while(b<=a)
		{
			printf(" ");
			b=b+1;
		}
		printf(" O\n");
		b=1;
		
		while(b<=a)
		{
			printf(" ");
			b=b+1;
		}
		printf("<H>\n");
		b=1;
		
		while(b<=a)
		{
			printf(" ");
			b=b+1;
		}
		printf("I I\n");
		b=1;
		Sleep(1000);
		a=a+1;

	}
	system("pause");
	return 0;
}
