#include <stdio.h>

int main()
{
    
    int num = 520;
    const int cnum = 880;

    const int *pc = &cnum;
    printf("cnum: %d, &cnum: %p \n", cnum, &cnum);
    printf("*pc:  %d, pc:    %p \n", *pc, pc);

    //尝试修改PC的值
    // *pc = 1024;
    pc = &num;
    printf("*pc: %d \n", *pc);
    return 0;
}
