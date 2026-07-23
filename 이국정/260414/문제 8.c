// 3×3 정수형 행렬 두 개를 더하여 새로운 행렬에 저장하고 출력하는 프로그램을 작성하시오

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable : 4996)


int main(void)
{
	int matrix1[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int matrix2[3][3] = { 5,6,7,8,9,10,11,12,13 };
	int matrix3[3][3];

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
		matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
		printf("%d ", matrix3[i][j]);
		}printf("\n");
	}

    return 0;
}