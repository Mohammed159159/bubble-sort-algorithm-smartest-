#pragma once
#include<stdio.h>
void inputArray(int array[])
{
	int len = 0;
	printf("Enter the length of the array: ");
	scanf_s("%d", len);
	printf("\n\nAn array of length %d, right away !\n\n", len);
	for (int i = 0; i < len; i++)
	{
		printf(" Enter n[%d]: ", i);
		scanf_s("%d", &array[i]);

	}
}
