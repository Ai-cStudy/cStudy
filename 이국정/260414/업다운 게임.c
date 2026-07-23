// up,down 게임을 만들어보자
// 난수로 1~100사이의 수를 생성, 본인이 입력한 수가 난수보다 크면 down 출력, 작으면 up출력
// ex) 컴퓨터가 입력한 수 51
// 내가 입력한 수 60 -> down

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable : 4996)

int main(void)
{
	srand((unsigned int)time(NULL));
	
		int randomNumber;
		int a1;
		int a2;
		int i = 0;
		int flag = 0;
		int j = 0;

		randomNumber = (rand() % 100) + 1;
	while (1)
	{
		a1 = randomNumber;

		printf("input number : ");
		scanf("%d", &a2);

		if (a1 == a2)
		{
			printf("%d is correct\n", a2);
			break;
		}
		else if (a1 > a2)
		{
			printf("up\n");
		}
		else
			printf("down\n");

	}
	return 0;
}