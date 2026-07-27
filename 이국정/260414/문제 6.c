// 크기가 5인 두 배열이 완전히 같은지 판별하는 함수를 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

void printScores(int score[], int size);
int getTotal(int score[], int size);
double getAverage(int score[], int size);
int getMax(int score[], int size);
int getMin(int score[], int size);

int main(void)
{    
    int arr1[5] = { 90,80,70,70,60};
    int arr2[5] = { 90,80,70,70,50};

    int size = sizeof(arr1) / sizeof(int);

    if (isSameArray(arr1, arr2, 5) == 1)
    {
        printf("arr1 is Same array");
    }
    else
    {
        printf("arr1 is not Same array");
    }
    
    return 0;
    
}

int isSameArray(int arr1[], int arr2[], int size)
{	
	int i;
	for (i = 0; i < size; i++)
	{
		if (arr1[i] == arr2[i])
		{
			continue;
		}
		else
		{
			return 0;
		}
	}return 1;
}

