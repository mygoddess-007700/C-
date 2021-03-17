/*
	时间：2020年10月3日14:35:25 
	主题：一元二次方程
	目的：郝斌老师第一节课
	功能：判断一个一元二次方程有无解
	心得：写的规范很重要 

*/
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int main ()
{
	
	float a,b,c;
	printf("请输入三个数表示一元二次方程的a,b,c\n");
	scanf("%f %f %f",&a,&b,&c);
	printf("该方程为%f*x*x+%f*x+%f==0\n",a,b,c);
	float delta;
	float x1;
	float x2;
	delta=b*b - 4*a*c;
	
if (delta > 0) 
{
	x1=(-b - sqrt(delta)) / (2*a); x2=(-b + sqrt(delta))/(2*a);
	printf("该方程有两个解,x1=%f,x2=%f\n",x1,x2);
}
else if (delta == 0)
{
	x1=(-b - sqrt(delta)) / (2*a); x2 = x1;
	printf("该方程有两个相同解，x1=x2=%d\n",x1);
}
else
{
	printf("该方程无解\n");
}

	system("pause");
	return 0;
	
}

/*
输出结果：例： 请输入三个数表示一元二次方程的a,b,c
34
345
32
该方程为34.000000*x*x+345.000000*x+32.000000==0
该方程有两个解,x1=-10.053441,x2=-0.093617
请按任意键继续. . .

*/ 
