// for문으로 별트리 만들기

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i;
	int j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

//or

int main(void)
{
	int num;

	do
	{
		printf("input number(1~9) : ");
		scanf("%d", &num);
	} while (num < 1 || num>9);

//특이하게 do-while 문은 while 뒤에 ;(세미콜론)을 붙여야 함

	printf("number is %d\n", num);

	return 0;

}

//이걸 while 문으로 고치면

int main(void)
{
	int num;

	printf("input number : ");
	scanf("%d", &num);
	while (num < 1 || num > 9)
	{
		printf("input number : ");
		scanf("%d", &num);
	}

	printf("number is %d", num);

	return 0;
}