//문제4 피보나치수열(반복문)
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int main(void)
{
	int number;
	int Fibonacci[50];

	printf("Input Integer Number: ");
	scanf("%d", &number);

	// number (1 <= N <= 50)
	if (!(number >= 1 && number <= 50))
	{
		printf("number Value out of range");
		exit(1);
	}
	else
	{
		for (int i = 0; i < number; i++)
		{
			if (i == 0)
				Fibonacci[i] = 0;
			else if (i == 1)
				Fibonacci[i] = 1;
			else
				Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
		}

		printf("Fibonacci %dth Value : %d\n", number, Fibonacci[number]);
	}

	return 0;
}