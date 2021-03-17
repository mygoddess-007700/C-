# include <stdio.h>
# include <math.h>
int main(void)
{
	int x, j;
	printf("2 ");
	for(x = 3; x <= 1000; x = x + 2)
	{
		bool boolen = true;
		for(j = 3; j <= sqrt(x); ++j)
		{
			if(x % j == 0)
				boolen = false;
		}
		if(boolen)
			printf("%d ", x);

	}
	
	return 0;
}
