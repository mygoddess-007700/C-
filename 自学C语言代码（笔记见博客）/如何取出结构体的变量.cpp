# include <stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {80, 66.6F, 'F'}; // 初始化 定义的同时赋初值(方法一)
    struct Student * pst = &st; //&st不能改成st

    pst->age = 88;//第二种方式
    st.age = 66.6f;//第一种方式 66.6在C语言默认是double类型，如果希望一个一个实数是float类型，则必须在末尾加f或F，因此66.6是double，66.6f或66.6F是float 
	printf("%d %f\n", st.age, pst->score);
	return 0;
}
			//注：pst->age在计算机内部会被转换成(*pst).age
			//没有为什么，这就是->的含义，这也是一种硬性规定
			//所以pst->age 等价于 (*pst).age 也等价于 st.age
			//我们之所以知道pst->age等价于 st.age,是因为知道了pst->age被转换成(*pst).age
