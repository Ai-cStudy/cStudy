//문제9 삽입 정렬
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)
void InsertSort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int keyValue = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > keyValue)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = keyValue;

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

	InsertSort(nums, number);

	printf("insert sort : ");
	for (int i = 0; i < number; i++)
	{
		printf("%d ", nums[i]);
	}

	return 0;
}