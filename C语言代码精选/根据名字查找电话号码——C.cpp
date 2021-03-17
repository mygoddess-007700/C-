//p240 2
# include <stdio.h>
# include <malloc.h>
# include <string.h>

struct people
{
    char name[20];
    char address[20];
    char number[20];
};

void input(people *, int, int);
void check(people *, int);

int main(void)
{
    people * p;
    int len, i;
    printf("请输入len：\n");
    scanf("%d", &len);
    p = (people*)malloc(sizeof(people)*len);
    for(i=0; i<len; ++i)
    {
        input(p, len, i);
    }
    check(p, len);

    return 0;
}

void input(people * p, int len, int i)
{
    printf("请输入第%d个人的信息(名字，地址和电话号码)\n", i+1);
    scanf("%s %s %s", p[i].name, p[i].address, p[i].number);
    printf("第%d个人的名字是%s，地址是%s，电话号码是%s\n", i+1, p[i].name, p[i].address, p[i].number);

    return;
}

void check(people * p, int len)
{
    int i;
    people str;
    
    printf("请输入您要查找的人：\n");
    scanf("%s", str.name);

    for(i=0; i<len; ++i)
    {
        if(strcmp(str.name, p[i].name) == 0)
        {
            break;
        }
    }
    if(strcmp(str.name, p[i].name) == 0)
    {
        printf("%s", p[i].number);
    }

    return;
}
