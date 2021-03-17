/*
时间：2020年10月4日20:16:21
功能：让由三行构成的小人从左向右运动 
收获：system("cls");   
功能：引入a，b构成两个while循环 

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
