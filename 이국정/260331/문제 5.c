// 사용자로부터 2 이상의 수를 입력받아 소수인지 아닌지 판별하는 프로그램을 만들어보자 (소수 : 1과 자기자신으로만 나누어지는 수)

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
		int num;
	int i;
	int a = 1;


	do
	{
		printf("input number : ");
		scanf("%d", &num);	
	} while (num <= 1);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			a = 0;
		}

	}

	if (a)
		printf("%d is prime", num);
	else
		printf("%d is not prime", num);
	
	return 0;
}

//교수님 풀이
int main(void)
{
	int n;
	int i;
	int count = 0;

	printf("input number : ");
	scanf("%d", &n);

	if (n < 2)
	{
		printf("incorrect number\n");
		exit(1);
	}

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}

	if (count == 2)
		printf("%d is prime\n", n);
	else
		printf("%d is not prime\n", n);

    return 0;
}