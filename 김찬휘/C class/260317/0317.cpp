/*첫 번째 프로그램 - 글자 출력하기*/

#include <stdio.h>
#pragma warning(disable:4996)
//scanf 쓸려면 이거 붙여야됨. 뭐 안되는 거 있으면 인터넷 쳐서 붙이기
int main(void)
//메인이라는 함수가 제일 먼저 시작된다. 프로그램이 동작을 하게끔 함. 메인 무조건 1개 있어야함.
{
	/*
	문자열 출력 printf() 호출 , 주석은 한 줄 잠시 지우는 용도로도 사용 가능하다.
	 ";" 이 줄이 끝났다는 것을 명시 . 문장 끝에 꼭 붙이기!!!
	{} 중괄호가 나오면 들여쓰기 해줘야함. 암묵적인 룰!
	printf 화면에 글자를 출력하는 함수
	\n 줄바꿈 (개행)
	가끔 안되는 경우는 빌드 > 솔루션 다시 빌드 누르고 나서 다시 컴파일 하기
	*/
	/*
	 뒤의 숫자가 앞의 변수에 들어감. 동등 연산자가 아니라 대입 연산자임.
	 변수는 데이터를 저장하는 공간, 
	 변수 앞에 숫자가 나올 수 없다
	 변수 앞에 나올 수 있는 건 _뿐이다
	 중간에 대문자를 넣는다 -> 카멜 표기법 areaCircle
	 중간에 밑줄을 넣는다 -> 스네이크 표기법 area_circle
	%d 뒤에 변수에 있는 숫자를 출력한다 . &d의 갯수에 따라 뒤에 변수의 갯수도 달라져야한다.
	%d 정수 출력 ,, 
	*/
	// printf 를 하고 나서 변수에 수를 더 하면 출력 되고 나서 변수 값 바뀜!
	//scanf 사용자로부터 값을 입력받아서 그 값을 변수에 저장하기 위한 함수
	//scanf 프로그램이 실행되었을 때 입력을 받는 칸
	//scanf 안에 변수 넣을 때는 앞에 & 넣어야함
	//실수형이 올 경우
	//short 정수 2 byte 65536개
	// signed (-32768~32767)
	// unsigned (0~65535)
	//int 정수 4 byte
	// 겁나 큰 정수가 있을 경우 : long long
	//float 실수 4 byte
	//double 실수 8 byte   -- 모르겠다 하면 double 쓰세용
	//char 문자 1byte 256개
	//signed (부호가 있는) (-128~ +127)
	//unsigned (0~255) (부호가 없는)      이 경우 변수에 대입을 할 때 숫자 뒤에 u 를 붙여서 보기 편하게 해줌
	//특별한 경우에는 대문자 써도 됨
	//실수의 경우 %d가 아니라 %f를 쓴다.

	int width, high;

	printf("input width:");
	scanf("%d", &width);
	printf("input high:");
	scanf("%d", &high);

	printf("square area is %d\n", width * high);

	int radius;
	double PI = 3.14;

	printf("input radius:");
	scanf("%d", &radius);
	printf("Circle area is %f\n", radius * radius * PI);

	int a, b;

	printf("First number:");
	scanf("%d", &a);
	printf("Second number:");
	scanf("%d", &b);
	printf("Sum is %d\n", a + b);
	printf("Subtraction is %d\n", a - b);
	printf("Multiplication is %d\n", a * b);

	int x, y, z;
	

	printf("First number:");
	scanf("%d", &x);
	printf("Second number:");
	scanf("%d", &y);
	printf("Third number:");
	scanf("%d", &z);
	float ab = (x + y + z) / 3;
	printf("The average is %f\n", ab);



	int sec;
	

	printf("input sec:");
	scanf("%d", &sec);

	float hour = sec / 3600.0;
	float min = sec / 60.0;

	printf("The hour is %f\n", hour);
	printf("The minute is %f\n", min);
	printf("The second is %f\n", sec);
	
	int F;
	
	printf("input Fahrenheit:");
	scanf("%d", &F);
	float C = (F - 32) * 5 / 9;
	printf("The Celsius is %f\n", C);


	return 0;
	
}