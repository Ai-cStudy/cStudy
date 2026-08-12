#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable: 4996)

int lower_bound(int* arr, int size, int target)
{
	int start = 0;
	int end = size - 1;
	int result = -1;
	
	while (start <= end)
	{
		int center = (start + end) / 2;

		if (arr[center] >= target)
		{
			result = center;
			end = center - 1;
		}
		else
		{
			start = center + 1;
		}

	}
	if (result != -1 && arr[result] == target)
		return result;
	else
		return -1;


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

	binary_search_index = lower_bound(sort_num, number, find_number);

	printf("first find index : %d\n", binary_search_index);


	return 0;
}