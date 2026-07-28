//문제5 최대공약수 구하기 (GCD)
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int GCD(int numA, int numB)
{
	if (numB == 0)
		return numA;
	else return GCD(numB, numA % numB);
}

int main(void)
{
	int numA, numB;

	printf("Input Integer NumberA, NumberB: ");
	scanf("%d %d", &numA, &numB);

	// 1 <= A, B <= 10,000

	if (!((numA >= 1 && numA <= 10000) && (numB >= 1 && numB <= 10000)))
	{
		printf("NumberA, NumberB Valus out of range");
		exit(1);
	}
	else
	{
		printf("%d AND %d GCD : %d\n", numA, numB, GCD(numA, numB));
	}

	return 0;
}