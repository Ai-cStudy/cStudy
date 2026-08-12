//문제10 정렬 응용
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)
void rank_score(int arr[], int size)
{
	int rank = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] < arr[j])
				rank++;
		}
		printf("%d ", rank);
		rank = 1;
	}
}

int main(void)
{
	int students;
	int score[100];

	printf("Input Students : ");
	scanf("%d", &students);

	if (!(students >= 1 && students <= 100))
	{
		printf("students Value out of range");
		exit(1);
	}

	printf("Input Score : ");
	for (int i = 0; i < students; i++)
	{
		scanf("%d", &score[i]);
	}

	printf("rank: ");
	rank_score(score, students);

	return 0;
}