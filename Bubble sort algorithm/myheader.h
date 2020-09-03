#pragma once
#include<stdio.h>

void inputArray(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf(" Enter n[%d]: ", i);
        scanf_s("%d", &array[i]);

    }
}

void bubbleSort(int array[], int len)
{
    int temp;
    //  Bubble sort
    int isSorted = 0;
    for (int i = 0; i < len - 1; i++)
    {
        if (isSorted == 1)
            break;

        isSorted = 1;
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;

                isSorted = 0;
            }
        }

    }
}

void printArray(int array[], int len)
{

    for (int i = 0; i < len; i++)
    {
        if (i == 0 && len != 1)
            printf("[%d, ", array[i]);
        else if (i == 0 && len <= 1)
            printf("[%d]", array[i]);
        else if (i == len - 1)
            printf("%d]", array[i]);
        else
            printf("%d, ", array[i]);
    }
}


struct array
{
    int index;
    int small;
};

void getSmall(int array[], int len)       //another perspective: https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/c-programming-basic-exercises-52.php

{
    int temp, j = 0;

    for (int i = 1; i < len - 1; i++)
    {
        if (array[j] < array[i])
        {
            temp = array[j];
        }
        else
        {
            j = i;
            temp = array[i];
        }
    }
    struct array result;
    result.index = j;
    result.small = temp;

    printf("\n The smallest Number is: %d, AT order: %d", result.small, result.index);

}