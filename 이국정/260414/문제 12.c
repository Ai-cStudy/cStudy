// 크기가 10인 배열을 함수에 전달하면, 배열 내의 숫자들을 오름차순(작은 순서대로)으로 정렬하는 함수를 시도해 보세요.

#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

void asending(int arr[], int size);

int main(void)
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("input %dth : ", i + 1);
		scanf("%d", &arr[i]);
	}

	asending(arr, 10);

	printf("sorted arr ; ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}

void asending(int arr[], int size)
{
	int temp = arr[0];
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}