// 1~100 사이의 수 중 3의 배수만 출력하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i;

	for (i = 1; i<=100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}
		
	return 0;
}

//교수님 풀이
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}
	printf("\n");

    return 0;
}