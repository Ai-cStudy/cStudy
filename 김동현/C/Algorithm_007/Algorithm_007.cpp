#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

void swap(int* swapA, int* swapB)
{
	int temp = *swapA;
	*swapA = *swapB;
	*swapB = temp;
}

void bubbleSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] < arr[j])
				swap(&arr[i], &arr[j]);
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

	bubbleSort(nums, number);

	printf("bubble sort : ");
	for (int i = 0; i < number; i++)
	{
		printf("%d ", nums[i]);
	}

	return 0;
}