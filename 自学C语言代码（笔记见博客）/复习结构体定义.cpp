# include <stdio.h>

struct Student
{
	int age;
    char sex;
    char name[100];
    //�ֺŲ���ʡ
};

int main(void)
{
    struct Student st = {20, 'F', "С��"};
    struct Student * pst = &st;

    printf("%d %c %c", st.age, pst->name, st.sex); //pst->ת����(*pst).age �ȼ��� st.age

    return 0;
}
