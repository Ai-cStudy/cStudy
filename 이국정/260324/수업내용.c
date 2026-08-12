/*
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int main(void)



{
*/
	/*
	int a, b;
	printf("input two numbers : ");
	scanf("%d %d", &a, &b);

	return 0;

	*/
	
/*--------------------------------------------------------------------------------------------*/

	/*
	printf("a: %d b:%d\n", a, b);

	unsigned char a = 214;
	printf("%hhX\n", a);
	printf("%d\n", a);
	printf("%d\n", (signed char)a);

	return 0;

	*/

/*--------------------------------------------------------------------------------------------*/

	/*
	int num;
	scanf("%d", &num);

	if (num > 10)
	{
		printf("More than 10\n");
	}
	else if (num == 10)
	{
		printf("Equal\n");
	}
	else
	{
		printf("less than 10\n");
	}

	return 0;

	*/
/*--------------------------------------------------------------------------------------------*/

	/*
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	
	if (num1 == 1 && num2 == 2)
	{
		printf("Exactly");
	}
	else
		printf("Please input exact number!!!");
	
	return 0;

	*/

	/*--------------------------------------------------------------------------------------------*/

	/*
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	if (num1 == 1)
	{
		if (num2 == 2)
			printf("Exactly");
		else
			printf("The value of num2 is incorrect\n");
	}
	else
		printf("The value of num1 is incorrect\n");

	return 0;

	*/

	/*--------------------------------------------------------------------------------------------*/
	
	/*
	
	char ch; //문자를 쓸때는 작은 따옴표'(''), 문자열을 쓸 때는 큰 따옴표("")
	scanf("%c", &ch);
	printf("input character is %c", ch);

	return 0;

	*/

	/*--------------------------------------------------------------------------------------------*/

	/*
	int num1, num2;
	char op;

	printf("input two number between arithmetic operation symbols : ");
	scanf("%d %c %d", &num1, &op, &num2);

	if (op == '+')
		printf("%d\n", num1 + num2);
	else if(op == '-')
		printf("%d\n", num1 - num2);
	else if (op == '*')
		printf("%d\n", num1 * num2);
	else if (op == '/')
		printf("%d\n", num1 / num2);

	return 0;

	*/

	/*--------------------------------------------------------------------------------------------*/
/*
//GPT해결 방법
#include <stdio.h>

int main() {
	int num1, num2;
	char op;

	// 예시 입력 (필요하면 scanf로 바꿔도 됨)
	scanf("%d %c %d", &num1, &op, &num2);

	if (op == '+')
		printf("%d\n", num1 + num2);
	else if (op == '-')
		printf("%d\n", num1 - num2);
	else if (op == '*')
		printf("%d\n", num1 * num2);
	else if (op == '/') {
		if (num2 != 0)
			printf("%d\n", num1 / num2);
		else
			printf("0으로 나눌 수 없습니다.\n");
	}
	else
		printf("잘못된 연산자입니다.\n");

	return 0;
}

*/


/*
//노시영 교수님 해법
#include <stdio.h>
#pragma warning(disable:4996)
int main() {

	int num1, num2;
	char op;

	scanf("%d %c %d", &num1, &op, &num2);


	if (op == '+')
		printf("%d\n", num1 + num2);
	else
		if (op == '-')
			printf("%d\n", num1 - num2);
		else
			if (op == '*')
				printf("%d\n", num1 * num2);
			else
				if (op == '/')
					printf("%d\n", num1 / num2);
				else
					printf("operator is not /\n");


	return 0;
}
*/

/*
//수업시간 문제 + 해결
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int main(void)


{

	int num1, num2;
	char op;

	scanf("%d %c %d", &num1, &op, &num2);


	if (op == '+')
	{
	printf("%d\n", num1 + num2);
	}
	else
	{
		printf("operator is not +\n");
	}
	if (op == '-')
		printf("%d\n", num1 - num2);
	else
		printf("operator is not -\n");
	if (op == '*')
		printf("%d\n", num1 * num2);
	else
		printf("operator is not *\n");
	if (op == '/')
		printf("%d\n", num1 / num2);
	else
		printf("operator is not /\n");

	return 0;

}

*/