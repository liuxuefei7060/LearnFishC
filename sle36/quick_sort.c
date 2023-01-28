#include <stdio.h>
void quick_sort(int array[], int left, int right) {
    int i = left; 
    int j = right;
    int temp;
    int pivot;//分割节点

    pivot = array[(left + right) / 2];

    while (i <= j)
    {
        while (array[i] < pivot)
        {
            i++;//如果左边数小于中间节点数值，指针位置右移一位
        }
        //从右到左找到小于等于基准点的元素
        while(array[j] > pivot) {
            j--;
        }
        // if (i <= j)
        // {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        // }
    }

    if(j > left) {
        quick_sort(array, left, j);
    }
    if(i < right) {
        quick_sort(array, i, right);
    }

}


int main() {
    printf("快速排序\n");
    int array[] = {10, 9, 8 , 7, 6, 5, 4, 3, 2, 1};
    int lenght = sizeof(array) / sizeof(array[0]);

    quick_sort(array, 0, lenght - 1);

    printf("排序后的数组为：\n");

    for (int i = 0; i < lenght; i++) {
        printf(" %d,", array[i]);
    }
    putchar('\n');
    
    
    return 0;
}