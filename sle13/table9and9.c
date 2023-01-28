
#include <stdio.h>
/**
 * 实现99乘法表
*/
int main(int argc, char const *argv[]){
    int i, j;
    for(i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++){
            printf("%d*%d=%-2d ", i, j, i * j);
        }
	printf("\n");        
    }

    return 0;
}
