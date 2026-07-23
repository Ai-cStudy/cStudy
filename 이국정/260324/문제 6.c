//양의 정수를 입력받아 3의 배수인지 판별하는 프로그램을 만들어보자
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void)
{
	int num;
	printf("input number : ");
	scanf("%d", &num);

	if(num <= 0)
	{
		printf("Please input positive number\n : ");
		exit(1);
	}

	if (num % 3 == 0)
		printf("That number is Multiples of 3\n");
	else
		printf("That number is not Multiples of 3\n");

	return 0;
}