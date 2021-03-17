/*
	标题：抄C语言点滴的一段程序 
	目的：试试看
	作用：没搞懂
	时间：2020年10月3日10:58:36 
	疑问：1.为什么是main（）2,为什么不加# include <stdlib.h>,system（“pause”）和return 0； 
		  3.为什么没有结果？ 

*/ 
# include <stdio.h>
main()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	
	while (fahr<=upper)
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
}
 
 /*结果：
 
 */
