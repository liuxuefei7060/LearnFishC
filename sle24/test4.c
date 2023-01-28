#include <stdio.h>

int square(int);

int square(int num) {
    return num * num;
}

int main()
{
    int temp[] = {0,1,2,3,4,5};

    printf("temp的值为: %p \n", temp);
    printf("&temp的值为: %p \n", &temp);

    int input;
    int (*fp)(int);
    printf("请输入数字 \n");
    scanf("%d", &input);
    fp = square;
    printf("square的地址 %p &square的地址 %p  fp的地址是%p  &fp的值是：%p\n", square, &square, fp, &fp);
    printf("计算结果是：%d 的 平方是 %d \n", input, fp(input));

    return 0;
}
