/*
时间：2020年10月4日20:52:36
目的：制作一个倒计时的计时器
收获：Sleep（1000）；是1秒
问题：有一点复杂，如何简化？ 
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int a,b;
	system("color 0a");
	a=3;
	b=59;
	if(a==3)
	{
		system("cls");
		printf("3:00\n");
		Sleep(50);
		a=2;
	}
	while(b>=10)
	{
		system("cls");
		printf("2:%d\n",b);
		Sleep(50);
		b=b-1;
	}
	while(b>=0)
	{
		system("cls");
		printf("2:0%d\n",b);
		Sleep(50);
		b=b-1;

	}
	a=1;
	b=59;
	while(b>=10)
	{
		system("cls");
		printf("1:%d\n",b);
		Sleep(50);
		b=b-1;
	}
	while(b>=0)
	{
		system("cls");
		printf("1:0%d\n",b);
		Sleep(50);
		b=b-1;
	}
	a=1;
	b=59;
	while(b>=10)
	{
		system("cls");
		printf("0:%d\n",b);
		Sleep(50);
		b=b-1;
	}
	while(b>=0)
	{
		system("cls");
		printf("0:0%d\n",b);
		Sleep(50);
		b=b-1;
	}
	system("pause");
	return 0;
	
	
	
		
}
