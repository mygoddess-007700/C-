/*
2020.11.23
�ĵã�1.�����������Ͳ�һ����ֹһ������
      2.�ٴ�ǿ��Ҫע���������ͣ����翴�����Ϊ0��
*/
# include <stdio.h>

int main(void)
{
    int j, x, y, t;
    int a[3][5], b[4][6];
    double c[8], ave, z;
    int i = 0;

    printf("�밴�ո�ʽ����15�����ݣ�������������ԭʼ�ɼ��봦�����ĳɼ�\n");
    for(x = 0; x < 3; ++x)
    {
        for(y = 0; y < 5; ++y)
        {
            scanf("%d", &t);
            a[x][y] = t;
        }
    }
    for(x = 0; x < 3; ++x)
    {
        for(y = 0; y < 5; ++y)
        {
            printf("%-8d", a[x][y]);
        }
        printf("\n");
    }

    for(x = 0; x < 3; ++x)
    {
        for(y = 0; y < 5; ++y)
        {
            b[x][y] = a[x][y];
        }
    }
    for(x = 0; x < 3; ++x)
    {
        c[i] = b[x][4] + b[x][3] + b[x][2] + b[x][1] + b[x][0];
        i = i + 1;

    }
    printf("%.1lf\n", (double)t);
    for(y = 0; y < 5; ++y)
    {
        c[i] = b[2][y] + b[1][y] + b[0][y];
        i = i + 1;
    }
    b[3][5] = 0;
    for(x = 0; x < 3; ++x)
    {
        for(y = 0; y < 5; ++y)
        {
            printf("%-8d", b[x][y]);
        }
        printf("%-8.1lf", c[x]);
        printf("\n");
    }
    for(y = 0; y < 5; ++y)
    {
        printf("%-8.1lf", c[y+3]);
    }
    printf("%-8d\n", b[3][5]);
    printf("average:\n");
    for(y = 0; y < 5; ++y)
    {
        z = c[y+3];
        ave = z/3;
    //    printf(" %lf ", z);(����)
        printf("%-8.1lf", ave);
    }

    return 0;
}

