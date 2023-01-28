#include <stdio.h>

void hanoi(int n, char x , char y, char z);

void hanoi(int n, char x , char y, char z) {
    static int count = 0;
    count++;
    if (n == 1) {
        printf("%c ----> %c   count = %d \n", x, z, count);
    } else {
        hanoi(n - 1, x, z, y);
        printf("%c ----> %c   count = %d \n", x, z, count);
        hanoi(n-1, y, x, z);
    }
    
}

int main(){
    printf("汉诺塔程序！！！！\n");
    int n;
    printf("请输入汉诺塔的层数");
    scanf("%d", &n);
    hanoi(n, 'X', 'Y', 'Z');

    return 0;
}