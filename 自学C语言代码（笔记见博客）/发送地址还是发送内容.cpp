 /*
2020.12.12 21��32��
ʾ����
	���͵�ַ��������
Ŀ�ģ�
	ָ��Ĳ����ŵ㣺
		���ٵĴ�������
		�����ڴ�С
		ִ���ٶȿ� 
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
    //�ֺŲ���ʡ
};

int main(void)
{
    struct Student st;
	//printf("%d\n", sizeof(st));
	
	InputStudent(&st); //�Խṹ������������� ���뷢��st�ĵ�ַ 
	OutputStudent(st); //�Խṹ������������ ���Է���st�ĵ�ַ��Ҳ���Է���st�����ݣ����͵�ַ�ã���Ϊj�����ڴ������ҿ죩 

    return 0;
} 

void OutputStudent(struct Student * pst)
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
}

void InputStudent(struct Student * pstu)  //pstuֻռ�ĸ��ֽ� 
{
	(*pstu).age = 10;
	strcpy(pstu->name, "����");
	pstu->sex = 'F';
}

/*
//�������޷��޸�������st��ֵ 
void InputStudent(struct Student stu) 
{
	stu.age = 10;
	strcpy(stu.name��"����"); //����д��stu.name = "����";
	stu.sex = 'F';	
}
*/ 
