// 재귀 함수(Recursive Function)를 이용하여 팩토리얼(Factorial)

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    printf("%d\n", f(3));
    return 0;
}

int f(int n)
{
    if (n > 1)
    {
        return n*f(n-1);
    }
    return n;
}

//재귀 함수 (recusive funtion)

// 3 * 함수호출
// 2 * 함수호출
// 1 *  함수호출
// 1 * 1 = 1
// 2 * 1 = 2
// 3 * 2 = 6


void printAlphabet(char statement[]);

int main(void)
{
	char alphabet[6] = "abcde";
	printAlphabet(alphabet);


	return 0;
}

void printAlphabet(char statement[])
{
	printf("%s \n", statement);

	printf("%d\n", sizeof(statement));
}


