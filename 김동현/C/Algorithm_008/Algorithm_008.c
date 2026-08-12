//문제8 선택 정렬
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

void swap(int* swapA, int* swapB)
{
	int temp = *swapA;
	*swapA = *swapB;
	*swapB = temp;
}

void selectionSort(int arr[], int size)
{
	int min;
	int minIndex;

	for (int i = 0; i < size - 1; i++)
	{
		min = arr[i];
		for (int j = i + 1; j < size; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				minIndex = j;
			}
		}
		if (min != arr[i])
		{
			swap(&arr[i], &arr[minIndex]);
		}
	}
}

int main(void)
{
	int number;
	int nums[100];

	printf("Input Integer Number: ");
	scanf("%d", &number);

	if (!(number >= 1 && number <= 100))
	{
		printf("number Value out of range");
		exit(1);
	}

	printf("Input %d Numbers: ", number);
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &nums[i]);
	}

	selectionSort(nums, number);

	printf("selection sort : ");
	for (int i = 0; i < number; i++)
	{
		printf("%d ", nums[i]);
	}

	return 0;
}