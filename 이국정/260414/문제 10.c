// 두 개의 정수를 입력받아 더 큰 값을 반환하는 getMax(int a, int b) 함수를 만드세요

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable : 4996)

int main(void)
{	
	int a, b;

	printf("input 2 number : ");
	scanf("%d %d", &a, &b);

	if (a > b)
		printf("biggest number : %d", a);
	else if (a < b)
		printf("biggest number : %d", b);
	else
		printf("two number is same");

    return 0;   
}