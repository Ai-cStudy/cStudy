#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main(void)
{
	/*int a = 3;
	a *= 4 + 10;
	//이런 식이 될 경우, 뒤에 4+10이 먼저 계산이 된다.

	printf("%d\n",a);
	
	

	int a;
	printf("input number :");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("The number is even number\n");
	else
		printf("The number is odd number\n");
		

	//-----------------------------------------------------------------------------------------------------------------------

	int b;
	printf("input number :");
	scanf("%d", &b);

	if (b > 0)
		printf("The number is positive number\n");
	else if (b == 0)
		printf("The number is zero\n");
	else
		printf("The number is negative number\n");

	//--------------------------------------------------------------------------------------------------------------------------

	int score;
	printf("Input your score (0~100) :");
	scanf("%d", &score);

	if (score < 0 || score>100)
	{
		printf("Error");
		exit(1);
	}

	if (score >= 90 && score<=100)
		printf("A\n");
	else if (score >= 80 && score<90)
		printf("B\n");
	else if (score >= 70 && score<80)
		printf("C\n");
	else if (score >= 60 && score<70)
		printf("D\n");
	else
		printf("F\n");
		*/


	int a, b, c;
	printf("Input 3 numbers :");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
		printf("The most biggest number is %d\n", a);
	else if(b>a && b>c)
		printf("The most biggest number is %d\n", b);
	else if(c>a && c>b)
		printf("The most biggest number is %d\n", c);
//위에껀 내답, 밑에껀 교수님 답------------------------------------------------------------------------------------

	int max = a;

	if (max < b)
		max = b;
	else if (max < c)
		max = c;

	printf("Maximum number is : %d", max);


	

//-------------------------------------------------------------------------------------------------------------------
	int age;
	printf("Input your age(0~130) :");
	scanf("%d", &age);

	if (age < 0 || age>130)
	{
		printf("Error");
		exit(1);
	}
	if (age < 8)
		printf("Free\n");
	else if (age >= 8 && age <= 19)
		printf("5,000Won\n");
	else
		printf("10,000Won\n");
//------------------------------------------------------------------------------------------------------------------
	int pa;
	printf("Input the number :");
	scanf("%d", &pa);
	if (pa <= 0)
	{
		printf("Error");
		exit(1);
	}

	if (pa % 3 == 0)
		printf("The number is 3 multiple\n");
	else
		printf("The number is not 3 multiple\n");
//--------------------------------------------------------------------------------------------------------------------
	int va;
	printf("Input the number :");
	scanf("%d", &va);

	if (va >=0)
		printf("%d\n", va);
	
	else
		printf("%d\n", -va);
//위에껀 내 답, 밑에껀 교수님 답----------------------------------------------------------------------------------------
	
	if (va < 0)
		va = va * (-1);

	printf("%d", va);

					

		
//--------------------------------------------------------------------------------------------------------------------





	return 0;
	
}