# include <stdio.h>
# include <malloc.h>

void input(double * , int );
void output(double * , int );
void sort(double * , int );

int main(void)
{
    int len = 1;
    double * p = (double*)malloc(sizeof(double)*len);

    printf("请输入你要排序的数的数量len\n");
    scanf("%d", &len);
    printf("len = %d", len);

    input(p,len);

    printf("您输入的数据为：\n");
    output(p,len);

    sort(p,len);

    printf("排序好的数据为：\n");
    output(p,len);

    return 0;
}

void input(double * p, int len)
{
    int i;

    printf("请输入数据\n");
    for(i=0; i<len; ++i)
    {
        scanf("%lf", &p[i]);
    }

    return;
}

void output(double * p, int len)
{
    int i;
    for(i=0; i<len; ++i)
    {
        printf("%lf ", p[i]);
    }
    printf("\n");

    return;
}

void sort(double * p, int len)
{
    int i, j, k, temp;

    for(j=0; j<len-1; ++j)
    {
        k = j;
        for(i=j+1; i<len; ++i)
        {
            if(p[i]>p[k])
            {
                k = i;
            }
        }
        temp = p[k];
        p[k] = p[j];
        p[j] = temp;
    }

    return;
}
