# include <stdio.h>
# include <malloc.h>

void seq(int * p, int len);
void insert_and_output(int * p, int len, int a);

int main(void)
{
    int len, i, a;
    int * p, *q;

    printf("请输入你想要排序数的数量:len\n");
    scanf("%d", &len);
    printf("len = %d\n", len);
    p = (int*)malloc(len * sizeof(int));

    printf("请输入你想输入的需要排序的数字\n");
    for(i=0; i<len; ++i)
    {
        scanf("%d", &p[i]);
    }

    seq(p, len);

    printf("请输入你要插入的数\n");
    scanf("%d", &a);
    insert_and_output(p, len, a);

    return 0;
}

void seq(int * p, int len)
{
    int i, j, k, t;
    for(j=0; j<len-1; ++j)
    {
        k = j;
        for(i=j+1; i<len; ++i)
        {
            if(p[i]<p[k])
            {
                k = i;
            }
        }
        t = p[j];
        p[j] = p[k];
        p[k] = t;
    }  
}

void insert_and_output(int * p, int len, int a)
{
    int t, i;
    int * q;
    q = (int*)malloc((len+1) * sizeof(int));
    for(i=0; i<len; ++i)
    {
        q[i] = p[i];
    }
    for(i=0; i<len; ++i)
    {
        if(a<q[i])
        {
            t = a;
            a = q[i];
            q[i] = t;
        }
    }
    q[len] = a;
    for(i=0; i<len+1; ++i)
    {
        printf("%-7d", q[i]);
    }
    free(q);
}




