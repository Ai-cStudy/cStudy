// 완전수 판별(자신을 제외한 약수의 합이 자기 자신이면 완전수)

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#define SIZE 10

int main(void)
{
	int num;
	printf("input number : ");
	scanf("%d", &num);

	int sum = 0;

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			sum += i;
	}

	if ((sum-num) == num)
		printf("%d is Perfect number", num);
	else
		printf("%d is not Perfect number", num);

	return 0;
}