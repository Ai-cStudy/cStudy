// 정수형 배열과 배열의 길이를 인자로 받아, 배열 내 모든 수의 합을 반환하는 sumArray 함수를 만드세요.

#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

int sumArray(int arr[], int size);

int main(void)
{   
	int n;
	int arr[100];

	printf("How many numbers are there to add? ; ");
	scanf("%d", &n);

	if (n > 100)
		n = 100;

	for (int i = 0; i < n; i++)
	{
		printf("input %dth : ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("Total : %d\n", sumArray(arr, n));

	return 0;
}

int sumArray(int arr[], int size)
{
	int total = 0;

	for (int i = 0; i < size; i++)
	{
		total = total + arr[i];
	}
	return total;
}