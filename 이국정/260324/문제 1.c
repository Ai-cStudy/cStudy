//1. 사용자로부터 정수 1개를 입력받아 이 수가 홀수 인지, 짝수 인지 판별하는 프로그램을 만들어보자
//(짝수; 2로 나누었을 때 나머지가 0인 경우)

#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)
	int main(void){

    int num1;
	printf("Input number : ");
	scanf("%d", &num1);

	if (num1 % 2 == 1)
		printf("input number is odd number\n");
	else
		printf("input number is even number\n");

	return 0;
    
    }
	
	

	