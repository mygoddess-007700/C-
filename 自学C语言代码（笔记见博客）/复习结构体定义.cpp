# include <stdio.h>

struct Student
{
	int age;
    char sex;
    char name[100];
    //分号不能省
};

int main(void)
{
    struct Student st = {20, 'F', "小娟"};
    struct Student * pst = &st;

    printf("%d %c %c", st.age, pst->name, st.sex); //pst->转化成(*pst).age 等价于 st.age

    return 0;
}
