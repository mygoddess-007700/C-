# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5]; //如果int占4个字节的话，则本函数总共包含有20个字节，每四个字节被当成了一个int变量来使用 
	int len;
	int * pArr;
	int i;
	
	//动态的构造一维数组 
	printf("请输入你要存放的元素的个数：\n");
	scanf("%d", &len);
	pArr = (int *)malloc(4 * len); //本行动态构造了一个一维数组
								//该一维数组的长度是len， 该一维数组元素的数据类型是int
								//该数组近似于 int pArr[len];
	
	//对一维数组进行操作 如：对动态一维数组进行赋值
	for(i=0; i<len; ++i)
		scanf("%d", &pArr[i]);
		
	//对一维数组进行输出
	printf("一维数组的内容是：\n");
	for(i=0; i<len; ++i)
		printf("%d\n", pArr[i]);
		
	free(pArr); // 释放掉动态分配的数值 
	
	return 0; 
}

// realloc(pArr，100); //意味着把原数组变成100个字节 
