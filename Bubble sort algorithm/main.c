#include<stdio.h>
#include<stdlib.h>
#include "myheader.h"

int main() {

    int len = 0;
    printf("Enter the length of the array: ");
    scanf_s("%d", &len);

    int* n = (int*)malloc(sizeof(int) * len);

    inputArray(n, len);

    // this is to just get the smallest number
    getSmall(n, len);

    printf("\n");
    // bubble sort
    bubbleSort(n, len);
    printArray(n, len);

}