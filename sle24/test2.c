#include <stdio.h>


int main() {

	int array[4][5] = {0};


	printf("array 的值为 %p \n", array);
	printf("*array 的值为 %p \n", **array);
	printf("array 的值为 %p \n", array);
	printf("array + 1 的值为 %p \n", array + 1);
	printf("*(array + 1) 的值为 %p \n", *(array + 1));
	return 0;
}
