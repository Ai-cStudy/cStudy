//세 개의 정수를 입력받아, 서로 같은 수가 있으면 어떤 번째 수끼리 같은지 출력하고, 모두 다르면 가장 큰 수를 출력하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void)
{
    /*
	int num1, num2, num3;
	printf("input three numbers : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 == num2)
		printf("1st number equal 2nd number");
	else if (num2 == num3)
		printf("2nd number equal 3rd number");
	else if (num1 == num3)
		printf("1st number equal 3rd number");
	else if	(num1 > num2 && num1 > num3)
		printf("%d", num1);
	else if (num1 < num2 && num3 < num2)
		printf("%d", num2);
	else if (num1 < num3 && num2 < num3)
		printf("%d", num3);

	return 0;
*/	
	
//or
/*
	int num1, num2, num3;
	int max;

	printf("input three numbers : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	max = num1;
	if (max < num2)
		max = num2;
	if (max < num3)
		max = num3;

	printf("Maximum number is %d\n", max);

	return 0;
*/
}