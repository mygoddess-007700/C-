/*
20202.11.27
函数的运用感觉还有问题，但是不知道问题在哪里。需要继续学习
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
    printf("请输入你要排序的整数的数量number\n");
    scanf("%d", &number);
    printf("number = %d\n", number);
    printf("请输入%d个正整数\n", number);
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
    printf("请输入一个数字，它表示接下来你要输入数据的数量\n");
    scanf("%d", &number);
    printf("number = %d\n", number);
    printf("请输入数据\n");
    for(i = 0; i < number; ++i)
    {
        scanf("%d", &s);
        a[i] = s;
    }
    printf("请输入一个数s，计算机会帮你判断其是否在这个数组中。如果在，计算机会帮你寻找它的位置\n");
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
        printf("s存在于此数组中，且其位置是第%d个元素\n", mid + 1);
    }
    else
    {
        printf("s不存在于此数组中\n");
    }
    

    return;
}
