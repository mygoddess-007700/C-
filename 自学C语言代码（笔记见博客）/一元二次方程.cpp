/*
	ʱ�䣺2020��10��3��14:35:25 
	���⣺һԪ���η���
	Ŀ�ģ��±���ʦ��һ�ڿ�
	���ܣ��ж�һ��һԪ���η������޽�
	�ĵã�д�Ĺ淶����Ҫ 

*/
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int main ()
{
	
	float a,b,c;
	printf("��������������ʾһԪ���η��̵�a,b,c\n");
	scanf("%f %f %f",&a,&b,&c);
	printf("�÷���Ϊ%f*x*x+%f*x+%f==0\n",a,b,c);
	float delta;
	float x1;
	float x2;
	delta=b*b - 4*a*c;
	
if (delta > 0) 
{
	x1=(-b - sqrt(delta)) / (2*a); x2=(-b + sqrt(delta))/(2*a);
	printf("�÷�����������,x1=%f,x2=%f\n",x1,x2);
}
else if (delta == 0)
{
	x1=(-b - sqrt(delta)) / (2*a); x2 = x1;
	printf("�÷�����������ͬ�⣬x1=x2=%d\n",x1);
}
else
{
	printf("�÷����޽�\n");
}

	system("pause");
	return 0;
	
}

/*
������������ ��������������ʾһԪ���η��̵�a,b,c
34
345
32
�÷���Ϊ34.000000*x*x+345.000000*x+32.000000==0
�÷�����������,x1=-10.053441,x2=-0.093617
�밴���������. . .

*/ 
