/*
2020.12.12 21��31��
ͨ��������ɶԽṹ��������������� 
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
    //�ֺŲ���ʡ
};

int main(void)
{
    struct Student st;
	
	InputStudent(&st); //�Խṹ������������� ���뷢��st�ĵ�ַ 
	printf("%d %c %s\n", st.age, st.sex, st.name);
	OutputStudent(st); //�Խṹ������������ ���Է���st�ĵ�ַ��Ҳ���Է���st�����ݣ����͵�ַ�ã���Ϊ�죩 

    return 0;
} 

void OutputStudent(struct Student ss)
{
	printf("%d %c %s\n", ss.age, ss.sex, ss.name);
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
