# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
    int a, number, min, max, range, num;
    printf("����һ�������������������\n");
    printf("�������������������������Ǵ�����������������Ͻ���½�\n");
    scanf("%d %d %d",&number, &max, &min);
    range = max - min + 1;
    srand((unsigned)time(NULL));
    for(a = 0; a < number; ++a)
    {
        num = rand()%range +min;//����num = rand(); 
        printf("%d ", num);
    }
    system("pause");
    
    return 0;
}
