// 1~10사이의 난수를 5개를 생성하여 크키가 5인 배열에 저장하는 함수를 만들어보자 (중복된 숫자가 배열 내에 존재하면 안됨)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable : 4996)

void randomNumber(int arr[], int size);

int main(void)
{
    srand((unsigned int)time(NULL));

    int arr[5];

    randomNumber(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void randomNumber(int arr[], int size)
{
    int i, j;
    int num;
    int duplicate;

    for (i = 0; i < size; i++)
    {
        do
        {
            num = rand() % 10 + 1;   
            duplicate = 0;

            for (j = 0; j < i; j++)
            {
                if (arr[j] == num)
                {
                    duplicate = 1;
                    break;
                }
            }

        } while (duplicate);

        arr[i] = num;
    }
}

//or

int main(void)
{
	int randomNumber;
	int arr[5];
	int i = 0;
	int flag = 0;

	srand((unsigned int)time(NULL));


	do {
		randomNumber = (rand() % 10) + 1;
		for (int j = 0; j < i; j++)
		{
			if (randomNumber == arr[j])
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
		{
			arr[i] = randomNumber;
			i++;
		}
		else
		{
			flag = 0;
		}
	} while (i < 5);

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}


	return 0;
}