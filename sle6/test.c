#include <stdio.h>

int main() {

	printf("----学习数据类型----\n");
	
	short int shortIntType = 10;

	int intType = -1;
	
	long int longIntType= 100000000000011000;
	long int longLongIntType = 122200000000011000;
	
	char  charType = 'H';
	float floatType = 20.05f;
	double doubleType = 30.01;
	_Bool bType = 1;

	printf("short shortIntType is %d \n",shortIntType);
	printf("int  intType is 十进制 %d  \n", intType);
	printf("int  intType is 八进制 %o  \n", intType);
	printf("int  intType is 十六进制 %x  \n", intType);
	printf("int  longIntType is  %ld  \n", longIntType);
	printf("int  longLongIntType is  %lld  \n", longLongIntType);

	printf("char  charType is %c \n", charType);

	printf("char  floatType is %.2f \n", floatType);
	printf("char  doubleType is %.2f \n", doubleType);

	printf("char  bType is %d \n", bType);


	printf("数据类型int   大小是  %d字节\n", sizeof(int));
	printf("数据类型short int   大小是  %d字节\n", sizeof(short));
	printf("数据类型long int   大小是  %d字节\n", sizeof(long int));
	printf("数据类型long long   大小是  %d字节\n", sizeof(long long int));

	printf("字符串 Hello  大小是  %d字节\n", sizeof("Hello"));



}
