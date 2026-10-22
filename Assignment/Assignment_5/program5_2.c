#include<stdio.h>
#include<stdlib.h>
void CheckLeapYear(int year)
{
    if((year % 4) == 0 && (year % 100)!= 0 || (year % 400) == 0)
    {
        printf("Year is Leap Year");
    }
    else
    {
        printf("It is not leap year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}