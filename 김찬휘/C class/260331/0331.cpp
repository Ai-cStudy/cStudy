//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)


//int main(void)
//{
	/*int year;
	printf("Input year : ");
	scanf("%d", &year);
	*/
	/*if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("It's LeapYear\n");
	else
		printf("It's not LeapYear\n");
	*/

	/*switch ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
	case 1:
		printf("It's LeafYear\n");
		break;
	default:
		printf("It's not LeafYear\n");
		break;

	}
	*/
	/*switch (year)
	{
	case 1:
		printf("It's LeapYear\n", year);
		break;
	case 2:
		printf("num is %d\n", year);
		break;
	default:
		printf("not 1 or 2\n");
		break;
	}
	*/
	
	//구구단 2단을 출력하는 프로그램

	/*int i = 1;

	while (i <= 9)
	{
		printf("2 * %d = %d\n", i, 2 * i);
		i++;
	}
	*/

	//구구단 2단을 출력하는 프로그램

	/*int i = 9;

	while (i >= 1)
	{
		printf("2 * %d = %d\n", i, 2 * i);
		i--;
	}
	*/

	//정수를 하나 입력 받아 그 정수의 약수를 출력하는 프로그램을 만들어보자

	/*int a;
	int i = 1;

	printf("Input number : ");
	scanf("%d", &a);

	while (i <= a)
	{
		if (a % i == 0)
			printf(" %d ", i);
		i++;
	}
	printf("\n");
	*/

	//반복문 중첩

	/* int i = 2;
	int j = 1;

	while (i <= 9)
	{
		while (j <= 9)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
		j = 1;
		printf("\n");
	}
	*/

	//4에서 8단까지 출력하기

	/* int i = 4;
	int j = 1;

	while (i <= 8)
	{
		while (j <= 12)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			j++;

		}
		i++;
		j = 1;
		printf("\n");
	}
	*/
	
/*int a = 1;
int b = 1;

while (a <= 5)
{
	
	while (b  <= a) {
		printf("*");
		b++;
	}
	a++;
	b=1;
	printf("\n");
}
*/

//별 트리 만들기

/*int i = 1;
int star = 1;
int space = 1;
int star_limit = 1;
int space_limit = 3;

while (i <= 4) //줄
{
	while (space <= space_limit) //공백
	{
		printf(" ");
		space++;
	}
	while (star<=star_limit) //별
	{
		printf("*");
		star++;
	}
	i++; 
	star_limit = star_limit + 2;
	space = 1;
	printf("\n");
	space_limit--;
	star = 1;

}
*/

//구구단 for문으로 만들기
/*int i, j;
for (i=2;i<=9;i++)
{
	for (j = 1;j <= 9;j++) 
	{
		printf("%d * %d = %d\n", i, j, i * j);
	}
	printf("\n");
}
*/	

//별트리 반쪽 for문으로 만들기

/*int i, j;

for (i = 1;i <= 5;i++)
{
	for (j = 1; j <= i;j++) {
		printf("*");
	}
	printf("\n");
}
*/

//do~while문 while문으로 바꿔보기
//int num;

/*do {
	printf("input number(1~9): ");
	scanf("%d", &num);

} while (num<1 || num>9);

printf("number is %d\n",num);
*/


/*printf("input number(1~9): ");
scanf("%d", &num);
while (num < 1 || num > 9)
{
	printf("Input number(1~9) :");
	scanf("%d", &num);
}

printf("number is %d\n", num);
*/
//for문으로 정수의 약수 구하기

/*int num;

printf("Input number : ");
scanf("%d", &num);

for (int i = 1;i <= num; i++)
{
	if (num % i == 0)
		printf("%d\n", i);
}
*/

// 1번 문제.

/*int num;
int sum = 0;
int i = 0;

do {
	printf("Input number : ");
	scanf("%d", &num);

} while (num <= 0);

while (i<=num)
{
	sum = sum + i;
	i++;
}
printf("%d\n", sum);
*/
//1번 문제 - 교수님 답안

/*int n;
int i;
int sum;

printf("Input number :");
scanf("%d", &n);

for (i = 0;i <= n;i++)
	sum = sum + i;

printf("%d\n", sum);
*/

//2번 문제

/*int num;
int sum = 0;
do {
	printf("Input number: ");
	scanf("%d", &num);
	sum = sum + num;
	
	
} while (num != 0);

printf("%d\n", sum);

*/

//2번 문제 -교수님 답안
/*int n = 0;
int sum = 0;
float avg=0;
int count = 0;

do {
	printf("Input number : ");
	scanf("%d", &n);

	sum = sum + n;
	count++;

	if (count == 0) {
		printf("There are no numbers\n");
		exit(1);
	}
} while (n != 0);

avg = sum / (float)(count);

printf("Sum : %d\n", sum);
printf("Average: %f\n", avg);
*/

//3번 문제

/*int num;
int max = 0;

do {
	printf("Input number :");
	scanf("%d", &num);
	if (max <= num)
		max = num;
		
} while (num != 0);
printf("%d", max);
*/

//3번 문제 - 교수님 답안

/*int n;
int max;
int count = 0;

do {
	printf("Input number :");
	scanf("%d", &n);

	count++;

	if (count == 1)
		max = n;
	else {
		if (max < n)
			max = n;
	}
} while (n != 0);

printf("Max: %d\n", max);
*/

//4번 문제
/*int i;
 
for (i = 1; i <= 100; i++)
{
	if(i%3==0)
		printf("%d\n", i);
}
*/

//4번 문제 - 교수님 답안

/*int i;

for (i = 1;i <= 100;i++)
{
	if (i % 3 == 0)
		printf("%d\n", i);
}
*/

//5번 문제

/*int i;
do {
	int count = 0;
	printf("Input number : ");
	scanf("%d", &i);
	for (int j=2; j <= i; j++)
	{
		if (i % j == 0)
			count++;
	
	}
	if (count == 1)
		printf("Sosu \n");
	else
		printf("Sosu Anim \n");

} while (i >= 2);
*/

//5번 문제 - 교수님 답안

/*int n, i;
int count = 0;

printf("Input number : ");
scanf("%d", &n);

if (n < 2) {
	printf("Incorrect number\n");
	exit(1);
}

for (i = 1; i <= n; i++)
{
	if (n % i == 0)
		count++;
}
if (count == 2)
	printf("%d is prime\n", n);
else
	printf(" %d is not prime\n", n);



*/
//	return 0;
//}





	
