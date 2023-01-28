#include <stdio.h>

int main() {
	char a[] = "Hello Wolrd";
	char *p = a;

	printf("数组is   %s\n", a);
	printf("第一个字母是 %c \n", a[0]);
	printf("第一个字母是 %c \n", *p);
	printf("第一个字母是 %c \n", *(p+1));
	
	printf("第一个字母是 %c \n", *(a+1));
	return 0;
}
