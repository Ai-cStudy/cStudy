//1. 사용자로부터 1 이상의 정수 n을 입력받아 1부터 n까지의 합을 구하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    	int num = 0;
	int i = 0;
	int sum = 0;

	do
	{
		printf("input number(number >= 1) : ");
		scanf("%d", &num);
	} while (num <= 0);

	while (i <= num)
	{
		sum = sum + i;
		i++;
	}
	printf("%d\n", sum);


	return 0;
}

//교수님 풀이
int main(void)
{
	int n;
	int i;
	int sum = 0;

	printf("input number : ");
	scanf("%d", &n);

	if (n < 1)
	{
		printf("incorrect number\n");
		exit(1);
	}

	for (i = 0; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);


	return 0;
}