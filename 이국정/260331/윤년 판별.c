//연도가 4로 나누어 떨어지면서 100으로 나누어 떨어지지 않는 해는 윤년(예: 1984,1544)
//연도가 400으로 나누어 떨어지는 해는 윤년


//if사용 윤년 판별
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
    int year;

    printf("input year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("It's Leapyear\n");
    else
        printf("It's not Leapyear\n");

    return 0 ;
}



/*switch문 사용하여 윤년 판별*/
int main(void)
{
    int year;

    printf("input year : ");
    scanf("%d", &year);

    switch ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
    case 1:
        printf("It's Leapyear\n");
        break;
    default:
        printf("It's not Leapyear\n");
        break;
    }

    return 0 ;
}

