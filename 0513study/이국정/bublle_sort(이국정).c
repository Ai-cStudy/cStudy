//버블정렬
//정수 N개가 주어졌을 때, 버블 정렬을 이용하여 오름차순으로 정렬하는 프로그램을 작성하시오.
//입력: 정수 N (1 ≤ N ≤ 100), N개의 정수
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#include <time.h>

int main(void)
{
	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(int);

	printf("input number : ");

	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] < 1 || arr[i] > 100)
		{
			printf("long number, retry ");
			i--;
		}
	}

	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j + 1] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	
	}

	for (int i = 0; i < size; i++)
	{	
		printf("%d ", arr[i]);
	}	

	return 0;
}