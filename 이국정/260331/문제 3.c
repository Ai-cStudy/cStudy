// 사용자로부터 숫자를 계속 입력받다가 0이 입력되면 입력한 숫자의 최댓값을 출력하는 프로그램을 만들어 보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num;
	int max = 0;
	
	do
	{
		printf("input number : ");
		scanf("%d", &num);
		if (num > max)
		{
			max = num;			
		}		
	} while (num != 0);

	printf("%d", max);


	return 0;
}

//교수님 풀이
int main(void)
{
	int n;
	int max, min;
	int count = 0;

	do
	{
		printf("input number : ");
		scanf("%d", &n);

		count++;

		if (count == 1)
		{
			max = n;
			min = n;
		}
		else
		{
			if (max < n)
			{ 
				max = n;
			}
			if (min > n)
			{
				min = n;
			}
		}
	} while (n != 0);

	printf("Max : %d\n", max);
	printf("Min : %d\n", min);

	return 0;
}