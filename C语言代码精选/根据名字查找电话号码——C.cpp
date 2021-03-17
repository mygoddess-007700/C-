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
    printf("������len��\n");
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
    printf("�������%d���˵���Ϣ(���֣���ַ�͵绰����)\n", i+1);
    scanf("%s %s %s", p[i].name, p[i].address, p[i].number);
    printf("��%d���˵�������%s����ַ��%s���绰������%s\n", i+1, p[i].name, p[i].address, p[i].number);

    return;
}

void check(people * p, int len)
{
    int i;
    people str;
    
    printf("��������Ҫ���ҵ��ˣ�\n");
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
