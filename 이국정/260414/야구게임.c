// 야구 게임

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable : 4996)

int main(void)
{
	srand((unsigned int)time(NULL));

while (1)
{
	int randomNumber;
	int arr1[3];
	int arr2[3];
	int i = 0;
	int flag = 0;
	int strike = 0;
	int ball = 0;
	int j = 0;
		
    do {
        randomNumber = rand() % 10;
        for (int j = 0; j < i; j++)
        {
            if (randomNumber == arr1[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            arr1[i] = randomNumber;
            i++;
        }
        else
        {
            flag = 0;
        }
    } while (i < 3);

    
    for (i = 0; i < 3; i++)
    {
        printf("input %dth number : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 3; i++)
    {
        if (arr1[i] == arr2[i])
        {
            strike++;
        }
        else
        {
            for (j = 0; j < 3; j++)
            {
                if (i != j && arr1[i] == arr2[j])
                    ball++;
            }
        }
    }

    if (strike == 3)
    {
        printf("3 Strike. Game Over");
    }
    else
    {
        printf("%d strike, %d ball", strike, ball);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", arr1[i]);
    }
    strike = 0;
    ball = 0;		

    printf("\n");
}
	return 0;
}