//문제11 이진탐색
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)
#define TRUE 1

int binary_search(int* arr, int start, int end, int target)
{
	int center;
	if (start > end) return -1;

	center = (start + end) / 2;

	if (arr[center] == target)
		return center;
	else if (arr[center] > target)
		return binary_search(arr, start, center - 1, target);
	else
		return binary_search(arr, center + 1, end, target);
}

int main(void)
{
	int number;
	int sort_num[100];
	int find_number;
	int binary_search_index;

	printf("Input Integer Number : ");
	scanf("%d", &number);

	if (!(number >= 1 && number <= 100))
	{
		printf("number Value out of range");
		exit(1);
	}

	printf("Array Input : ");
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &sort_num[i]);
	}

	printf("Input integer FindNumber : ");
	scanf("%d", &find_number);

	binary_search_index = binary_search(sort_num, 0, number-1, find_number);

	if (binary_search_index == -1)
	{
		printf("not find\n");
	}
	else
	{
		printf("%d value index : %d\n", find_number, binary_search_index);
	}

	

	return 0;
}