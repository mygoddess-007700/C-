/*
时间：2020年10月4日15:31:50
目的：对char的熟练运用 

*/ 

# include <stdio.h>
int main(void)
{
	char ch = 'A' ;
//  char ch = "AB" ;   //error 因为AB是字符串，不能把字符串赋值给单个字符
//  char ch = "A" ;    //error

//  char ch = 'AB' ;    //'AB'是错误的

//  char ch = 'B' ;    //error 变量会重复命名

    printf("%c\n",ch);
	
	return 0; 
	 
	
 } 
