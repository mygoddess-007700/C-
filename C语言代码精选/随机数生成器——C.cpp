# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
    int a, number, min, max, range, num;
    printf("这是一个正整数随机数生成器\n");
    printf("请依次输入三个正整数，它们代表随机数的数量，上界和下界\n");
    scanf("%d %d %d",&number, &max, &min);
    range = max - min + 1;
    srand((unsigned)time(NULL));
    for(a = 0; a < number; ++a)
    {
        num = rand()%range +min;//错误：num = rand(); 
        printf("%d ", num);
    }
    system("pause");
    
    return 0;
}
