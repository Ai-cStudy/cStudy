// 사용자로부터 숫자를 계속 입력받다가 0이 입력되면 입력한 숫자의 총합과 평균을 출력하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int num;
	int sum = 0;
	int i = 0;

	do
	{
		printf("input number : ");
		scanf("%d", &num);
		sum = sum + num;
		i++;		
	} while (num != 0);

	printf("total = %d\n", sum);
	printf("average = %d\n", sum /(i-1));

	return 0;
}
//교수님 풀이
int main(void)
{
	int n;
	int sum = 0;
	float avg;
	int count = 0;
	do
	{
		printf("input number : ");
		scanf("%d", &n);

		sum = sum + n;
		count++;
	} while (n != 0);


	if (count == 0)
	{
		printf("There are no inputed numbers\n");
		exit(1);
	}

	avg = sum / (float)(count);
	printf("sum : %d\n", sum);
	printf("average : %f\n", avg);

	return 0;
}