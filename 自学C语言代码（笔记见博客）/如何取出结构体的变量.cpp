# include <stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {80, 66.6F, 'F'}; // ��ʼ�� �����ͬʱ����ֵ(����һ)
    struct Student * pst = &st; //&st���ܸĳ�st

    pst->age = 88;//�ڶ��ַ�ʽ
    st.age = 66.6f;//��һ�ַ�ʽ 66.6��C����Ĭ����double���ͣ����ϣ��һ��һ��ʵ����float���ͣ��������ĩβ��f��F�����66.6��double��66.6f��66.6F��float 
	printf("%d %f\n", st.age, pst->score);
	return 0;
}
			//ע��pst->age�ڼ�����ڲ��ᱻת����(*pst).age
			//û��Ϊʲô�������->�ĺ��壬��Ҳ��һ��Ӳ�Թ涨
			//����pst->age �ȼ��� (*pst).age Ҳ�ȼ��� st.age
			//����֮����֪��pst->age�ȼ��� st.age,����Ϊ֪����pst->age��ת����(*pst).age
