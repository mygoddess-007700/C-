# include <stdio.h>
int primeNum(int num);

int main(void)
{
    int num, n;
    printf("������һ����num����������ж����Ƿ��������q is quit:\n");
    printf("num = %d\n", num);
    while((scanf("%d", &num)==1))
    {
        n = primeNum(num);
        if(n == 0)
        {
            printf("num is not prime\n");
        }
        else if(n == num)
        {
            printf("num is prime\n");
        }
        else
        {
            printf("�������\n");
        }
        n == -1;

    }
    
    
    return 0;
}

int primeNum(int num)
{
    int t;
    for(t = 2; (t * t) <= num; ++t)
    {
        if(num % t == 0)
            break;
    }
    if(num == 1)
    {
        return 0;
    }
    else if(num == 2 || num % t != 0)
    {
        return num;
    }
    else
    {
        return 0;
    }
    
}

