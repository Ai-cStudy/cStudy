//문제1 재귀함수 기초
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

//재귀함수
int getSum(int num, int sum)
{
	if (num == 0)
		return sum;
	else
		return getSum(num - 1, sum += num);
	

}
int main(void)
{
	int number;

	// Number(1 <= N <= 100
	printf("Input Integer Number : ");
	scanf("%d", &number);

	if (!(number >= 1 && number <= 100))
	{
		printf("number Value out of range");
		exit(1);
	}
	else
	{
		printf("1 ~ number sum : %d\n", getSum(number, 0));
	}

	return 0;
}
