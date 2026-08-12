//문제3 피보나치 수열(재귀)
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int Fibonacci(int num)
{
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else
		return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main(void)
{
	int number;

	// number(1 <= N <= 30)
	printf("Input Integer Number: ");
	scanf("%d", &number);

	if (!(number >= 1 && number <= 30))
	{
		printf("number Value out of range");
		exit(1);
	}
	else
	{
		printf("Fibonacci %dth value : %d\n", number, Fibonacci(number));
	}

	return 0;
}