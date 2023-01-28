#include <stdio.h>


int main() {

	int array[4][5] = {0};

	printf("int类型的长度是 %lu \n", sizeof(int));
	printf("array的地址是		 %p\n", array);
	printf("array + 1 的地址是	 %p\n", array + 1);
	printf("array[1] 的地址是       %p\n", array[1]);

	return 0;
}
