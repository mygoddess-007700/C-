/*
2020.12.12 21点31分
通过函数完成对结构体变量的输入和输出 
*/

# include <stdio.h>
# include <string.h>
void InputStudent(struct Student *);
void OutputStudent(struct Student ss); 

struct Student
{
	int age;
    char sex;
    char name[100];
    //分号不能省
};

int main(void)
{
    struct Student st;
	
	InputStudent(&st); //对结构体变量进行输入 必须发送st的地址 
	printf("%d %c %s\n", st.age, st.sex, st.name);
	OutputStudent(st); //对结构体变量进行输出 可以发送st的地址，也可以发送st的内容（发送地址好，因为快） 

    return 0;
} 

void OutputStudent(struct Student ss)
{
	printf("%d %c %s\n", ss.age, ss.sex, ss.name);
}

void InputStudent(struct Student * pstu)  //pstu只占四个字节 
{
	(*pstu).age = 10;
	strcpy(pstu->name, "张三");
	pstu->sex = 'F';
}

/*
//本函数无法修改主函数st的值 
void InputStudent(struct Student stu) 
{
	stu.age = 10;
	strcpy(stu.name，"张三"); //不能写成stu.name = "张三";
	stu.sex = 'F';	
}
*/ 
