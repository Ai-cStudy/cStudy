// 자리수 중 가장 큰 숫자 찾기

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable : 4996)

int main(void)
{	
	int num;
	do {		
		printf("input positive number : ");
		scanf("%d", &num);	

		if (num == 0)
		{
			printf("this number is zero\n");
		}
		else if (num < 0)
		{
			printf("this number is negative\n");
		}
		
	} while (num <= 0);	

	int max = num % 10;
	num = num / 10;

	while (num > 0)
	{
		if (max < num % 10)
			max = num % 10;
		num = num / 10;
	}	
	printf("max : %d\n", max);


}