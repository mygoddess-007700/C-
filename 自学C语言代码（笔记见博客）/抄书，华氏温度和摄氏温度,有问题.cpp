/*
	���⣺��C���Ե�ε�һ�γ��� 
	Ŀ�ģ����Կ�
	���ã�û�㶮
	ʱ�䣺2020��10��3��10:58:36 
	���ʣ�1.Ϊʲô��main����2,Ϊʲô����# include <stdlib.h>,system����pause������return 0�� 
		  3.Ϊʲôû�н���� 

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
 
 /*�����
 
 */
