 /*
2020.12.12 21点32分
示例：
	发送地址还是内容
目的：
	指针的部分优点：
		快速的传递数据
		耗用内存小
		执行速度快 
*/

# include <stdio.h>
# include <string.h>
void InputStudent(struct Student *);
void OutputStudent(struct Student *); 

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
	//printf("%d\n", sizeof(st));
	
	InputStudent(&st); //对结构体变量进行输入 必须发送st的地址 
	OutputStudent(st); //对结构体变量进行输出 可以发送st的地址，也可以发送st的内容（发送地址好，因为j减少内存分配而且快） 

    return 0;
} 

void OutputStudent(struct Student * pst)
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
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
