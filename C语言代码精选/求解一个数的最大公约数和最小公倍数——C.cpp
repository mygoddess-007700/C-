/*
4.5.2
�������ĳ˻������������������Լ������С�������ĳ˻�
*/
# include <stdio.h>
int gcd(int a, int b);
int mul(int a, int b, int gcd);
int main(void)
{
    int a, b, max, min;
    printf("��������������������������������ǵ����Լ������С������\n");
    scanf("%d %d", &a, &b);
    max = gcd(a, b);
    min = mul(a, b, max);
    printf("%d %d\n", max, min);
    
    return 0;
}
int gcd(int a, int b)
{
    int max;
    if(a == b)
    {
        return a;
    }
    else if(a > b)
    {
        a = a%b;
    }
    else
    {
        b = b%a;

    }
    if(a == 0)
    {
        return b;
    }
    else if(b == 0)
    {
        return a;
    }
    else
    {
        max = gcd(a, b);
        return max;
    }
}
int mul(int a, int b, int gcd)
{
    return ((a * b)/gcd); 
}

