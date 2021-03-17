# include <stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {80, 66.6, 'F'};
	
	return 0;
}
