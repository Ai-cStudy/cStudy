//수를 입력받아 절댓값(absolute value)을 출력하는 프로그램을 만들어보자

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void)
{
    /*
    int num;
    printf("input number : ");
    scanf("%d", &num);

    if (num >= 0)
        printf("%d\n", num);
    else
        printf("%d\n", -num);

    return 0;

    */

    //or 

    /*
    int num;
    printf("input number : ");
    scanf("%d", &num);

    if (num < 0)
        num = num * (-1);

    printf("%d\n", num);

    return 0;

    */

    //or

    /*
    int num;
    printf("input number : ");
    scanf("%d", &num);

    if (num < 0)
        printf("%d", num * (-1));
    else
        printf("%d", num);

    return 0;

    */
}