//문제6 선형 탐색
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)
#define TRUE 1
#define FALSE 0

int main(void)
{
	// 정수 number 1 <= number <= 100
	int nums[100] = {0};
	int number;
	int findNumber;
	int index = 0;
	int isFindNumber = FALSE;

	printf("Input Integer Number: ");
	scanf("%d", &number);
	if (!(number >= 1 && number <= 100))
	{
		printf("number Value out of range");
		exit(1);
	}

	printf("Input %d pieces Number:",number);
	for (int i = 0; i < number; i++)
		scanf("%d", &nums[i]);

	printf("Input FindNumber: ");
	scanf("%d", &findNumber);

	for (int i = 0; i < number; i++)
	{
		if (nums[i] == findNumber)
		{
			index = i;
			isFindNumber = TRUE;
			break;
		}
	}

	if (isFindNumber)
	{
		printf("Index of the number %d : %d\n", findNumber, index);
	}
	else
	{
		printf("not find number");
	}

	return 0;
}