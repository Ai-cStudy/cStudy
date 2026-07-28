// 정수형 배열에 저장된 학생들의 점수를 대상으로 다음 기능을 각각 함수로 작성

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
	int score[5] = { 90,80,70,85,100 };

	printScores(score, 5);

	printf("Total : %d\n", getTotal(score, 5));

	printf("ave : %0.2f\n", getAverage(score, 5));

	printf("max : %d\n", getMax(score, 5));

	printf("min : %d\n", getMin(score, 5));


	return 0;
}

void printScores(int score[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d \n", score[i]);
	}printf("\n");

}

int getTotal(int score[], int size)
{
	int sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum = sum + score[i];
	}

	return sum;
}

double getAverage(int score[], int size)
{
	double ave = 0;	
	ave = (double) getTotal(score, size) / size;
	return ave;
}

int getMax(int score[], int size)
{
	int max = score[0];
	int i;

	for (i = 0; i < size; i++)
	{
		if(max < score[i])
		max = score[i];
	}

	return max;
}

int getMin(int score[], int size)
{
	int min = score[0];
	int i;

	for (i = 0; i < size; i++)
	{
		if(min > score[i])
		min = score[i];
	}

	return min;
}

