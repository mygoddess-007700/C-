/*
2020.12.28
不要把数组的中括号写成大括号
scanf不能写%.1lf，只能写%lf
*/
# include <stdio.h>
# include <malloc.h>

struct student
{
    long mem;
    char name[10];
    double p, d, n, o, ave;
};

void inGrade(student *, int);
void aveGrade(student *, int);
int maxGrade(student *, int);
void outGrade(student *, int, int);
void maxGrade2(student *, int);

int main(void)
{
    int len;
    int i;
    int max;
    student * p;
    p = (student *)malloc(sizeof(student)*len);
    printf("请输入您想处理学生的数量len：\n");
    scanf("%d", &len);
    inGrade(p, len);
    aveGrade(p, len);
    max = maxGrade(p, len);
    printf("平均分最高的学生的信息为：\n");
    outGrade(p, len, max);
    maxGrade2(p, len);
    for(i=0; i<len; ++i)
    {
        outGrade(p, len, i);
    }

    return 0;
}

void inGrade(student * p, int len)
{
    int i;
    for(i=0; i<len; ++i)
    {
        printf("请输入第%d个学生的数据:\n", i+1);
        printf("mem = ");
        scanf("%ld", &p[i].mem);

        printf("name = ");
        scanf("%s", p[i].name);

        printf("请依次输入p，d，n，o, 中间用空格隔开\n");
        scanf("%lf %lf %lf %lf", &p[i].p, &p[i].d, &p[i].n, &p[i].o);      
    }
}

void aveGrade(student * p, int len)
{
    int i;
    for(i=0; i<len; ++i)
    {
        p[i].ave = (p[i].p+p[i].d+p[i].n+p[i].o)/4;
    }
}

int maxGrade(student * p, int len)
{
    int i;
    double max = 0, t = 0;
    for(i=0; i<len; ++i)
    {
        if(max<p[i].ave)
        {
            t = i;
        }
    }

    return t;
}

void outGrade(student * p, int len, int max)
{
    printf("%ld\n", p[max].mem);
    printf("%s\n", p[max].name);
    printf("%.1lf %.1lf %.1lf %.1lf\n", p[max].p, p[max].d, p[max].n, p[max].o);
    printf("%.1lf\n", p[max].ave);
}

void maxGrade2(student * p, int len)

{
    int i, j, k;
    double t;
    for(j=0; j<len-1; ++j)
    {
        k = j;
        for(i=j+1; i<len; ++i)
        {
            if(p[i].ave>p[k].ave)
            {
                k = i;
            }
        }
        t = p[k].ave;
        p[k].ave = p[j].ave;
        p[j].ave = t;
    }

}
