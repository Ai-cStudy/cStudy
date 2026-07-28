//문제2 팩토리얼 계산
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int factorial(int num)
{
	if (num == 0)
		return 1;
	else
		return num * factorial(num - 1);
}

int main(void)
{
	int number;

	// number(0 <= N <= 12)
	printf("Input Integer Number: ");
	scanf("%d", &number);

	if (!(number >= 0 && number <= 12))
	{
		printf("number Value out of range");
		exit(1);
	}
	else
	{
		printf("%d! : %d\n", number, factorial(number));
	}

	return 0;
}