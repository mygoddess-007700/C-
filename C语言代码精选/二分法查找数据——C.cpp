/*
20202.11.27
���������øо��������⣬���ǲ�֪�������������Ҫ����ѧϰ
*/
# include <stdio.h>
void compositor(void);
void dichotomy(void);

int main(void)
{
    compositor();
    dichotomy();
    
    return 0;
}

void compositor(void)
{
    int number = 2, i, k, t, s;
    int a[number];
    printf("��������Ҫ���������������number\n");
    scanf("%d", &number);
    printf("number = %d\n", number);
    printf("������%d��������\n", number);
    for(i = 0; i < number; ++i)
    {
        scanf("%d", &s);
        a[i] = s;
    }
    for(i = 0; i < (number - 1); ++i)
    {
        for(k = 0; k < (number - i - 1); ++k)
        {
            if(a[k] > a[k+1])
            {
                t = a[k];
                a[k] = a[k+1];
                a[k+1] = t;
            }
        }
    }
    for(i = 0; i < number; ++i)
    {
        printf("%d  ", a[i]);
    }

    return;
}

void dichotomy(void)
{
    int number = 2, low, high, mid, i, s;
    int a[number];
    printf("������һ�����֣�����ʾ��������Ҫ�������ݵ�����\n");
    scanf("%d", &number);
    printf("number = %d\n", number);
    printf("����������\n");
    for(i = 0; i < number; ++i)
    {
        scanf("%d", &s);
        a[i] = s;
    }
    printf("������һ����s�������������ж����Ƿ�����������С�����ڣ�����������Ѱ������λ��\n");
    scanf("%d", &s);
    printf("s = %d\n", s);
    low = 0;
    high = i - 1;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(s < a[mid])
        {
            high = mid - 1;
        }
        if(s > a[mid])
        {
            low = mid + 1;
        }
        if(s == a[mid])
        {
            break;
        }
    }
    if(s == a[mid])
    {
        printf("s�����ڴ������У�����λ���ǵ�%d��Ԫ��\n", mid + 1);
    }
    else
    {
        printf("s�������ڴ�������\n");
    }
    

    return;
}
