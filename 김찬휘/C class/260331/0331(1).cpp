
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int main(void) {

//gpt 문제 no.1

/*	int i;
	int sum = 0;

	for (i = 1;i <= 10;i++)
		sum = sum + i;
	printf("%d", sum);
	*/

//gpt 문제 no.2
	/*int n;
	int sum = 0;
	
	printf("Input number :");
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
		sum = sum + i;
	printf("Sum is % d\n", sum);
	*/

//gpt 문제 no.3
/*	int i;

	for (i = 1;i <= 50;i++)
		if (i % 2 == 0)
			printf("%d",i);
*/
//gpt 문제 no.4
/*	int n;
	printf("Input number : ");
	scanf("%d", &n);
	for (int i = 1;i <= 9;i++)
		printf("%d * %d = %d\n", n, i, n * i);

		*/
//gpt 문제 no.5
	/*int i, j;
	for (i = 1;i <= 5;i++) {
		for (j = 1;j <= i;j++) {
			printf("*");
		}
		printf("\n");
	}
	*/

//gpt 문제 no.6
	/*int i, j;
	for (i = 1;i <= 5;i++) {
		for (j = 5;j >= i;j-=1) {
			printf("*");
		}
		printf("\n");
	}
	*/
	

//gpt 문제 no.7
/*	int i;
	int fac=1;
	printf("Input number :");
	scanf("%d", &i);
	for (int j = 1; j <= i; j++) {
		fac = fac * j;

	}
	printf("%d!is %d", i, fac);
	*/

//gpt 문제 no.8
	/*int num;
	int a;
	printf("Input number :");
	scanf("%d", &num);

	while (num > 0) {
		a = num % 10;
		printf("%d",a);
		num = num / 10;
	}
	*/

//gpt 문제 no.9
/*	int num;
	int sum=0;
	
	
	printf("Input number :");
	scanf("%d", &num);
	while (num > 0) {
		sum = sum + (num % 10);
		num = num / 10;
	}
	printf("%d", sum);
	*/

//gpt 문제 no.10
/*	int num, a;
	int b;
	int count = 0;

	printf("Input number :");
	scanf("%d %d", &num, &a);

	while (num > 0)
	{
		b = num % 10;
		if (b == a)
		{
			count++;
		}
		num = num / 10;
	}
	printf("%d", count);
	*/

//gpt 문제 no.11

/*int num;
int sum = 0;

printf("Input number :");
scanf("%d", &num);

for (int i=1;i < num;i++) {
	if (num % i == 0) {
		sum = sum + i;
	}
}
if (sum == num) {
	printf("wanjunsoo");
}
else {
	printf("not wanjunsoo");
}
*/

//no.12  피보나치 수열
//int num, a = 1, b = 1;
//int sum = 0;
//
//
//printf("Input number :");
//scanf("%d",&num);
//
//if(num>=1){
//	printf("%3d", a);	
//}
//if (num >= 2) {
//	printf("%3d", a);
//}
//for (int i = 3;i <= num;i++) {
//	sum = a + b;
//	printf("%3d", sum);
//	a = b;
//	b = sum;
//}

//13번 문제. 자리수 중 가장 큰 숫자 찾기
/*int num;
int max = 0;
int a = 0;

printf("Input number : ");
scanf("%d", &num);

while (num > 0) {
	a = num % 10;
	if (a >= max) {
		max = a;
	}
	num = num / 10;
}
printf("%d", max);
*/

//14번 문제. 특정규칙숫자만들기

/*int num;
int out = 0;

printf("Input number : ");
scanf("%d", &num);

for (int i = 1;i <= num;i++) {
	out = i;
	printf("%d", out);
}
for (int j = num-1;j >= 1;j--) {
	out = j;
	printf("%d", out);
}
*/

//15번 문제. 2이상 정수 N을 입력받아 1~N 사이의 숫자들 자리의 합이 10 숫자 출력

/*int n;
int i,a ;
int sum = 0;

printf("Input number : ");
scanf("%d", &n);

if (n < 2) {
	exit(1);
}
for (i = 1;i <= n;i++) {
	while (i >= 10){
		a = i % 10;
		sum = sum + a;
		if (sum == 10) {
			
		}
		printf("%d\n", i);
		i = i / 10;
	}
}
*/

//16번 문제. 숫자를 2개로 나눠 최대 합 만들기

int num,b,a;
int max = 0;
int sum = 0;

printf("Input number : ");
scanf("%d", &num);

for (int i = 10; i < num; i *= 10) {
	b = num;
	a = b % i;
	b = b / i;
	sum = a + b;
	if (sum > max && b!=0) {
		max = sum;
	}
}

printf("%d\n", max);



	return 0;


}
