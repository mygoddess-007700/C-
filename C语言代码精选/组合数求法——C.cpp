# include <stdio.h>
extern long double combinNum(int m,int n);

int main(void)
{
    int a, b;
    double com = 1;
    printf("�����������Ǹ���������������������ǵ������\n");
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    if(a == b)
    {
        printf("1\n");
    }
    else if(a < b)
    {
        printf("they do not have combinNum\n");
    }
    else
    {
        com = combinNum(a, b);
        printf("%llf\n", com);
    }
    

    return 0;
}
long double combinNum(int m, int n)
{
    long int t, mul1 = 1, mul2 = 1, mul3 = 1;
    t = m - n;
    while(m > 1)
    {
        mul1 = mul1 * m;
        --m;
    }
    while(n > 1)
    {
        mul2 = mul2 * n;
        --n;
    }
    while(t > 1)
    {
        mul3 = mul3 * t;
        --t;
    }

    return (1.0*mul1/(mul2 * mul3));
}

/*
��������
�����������Ǹ����������������������
�������
9 6
a = 9, b = 6
84.000000

�����������Ǹ����������������������
�������
9 9
a = 9, b = 9
1

�����������Ǹ����������������������
�������
6 9
a = 6, b = 9
they do not have combinNum
*/
