#include <stdio.h>

int main() {
	int a;
	char b;
	float c;
	double d;

	a = 100;
	b = 'A';
	c = 13.0f;
	d = 121342.00000123123;
	printf("整型数据a = %d \n", a);
	printf("字符型数据b = %c  字符型数据可以按照整型数据%d\n", b, b);
	printf("浮点型数据 c = %.2f\n", c);
	printf("双精度浮点型数据 d = %11.5f\n", d);
}
