////////////////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Batch : Logic Building 
//  Problem : Check Leap Year
//
////////////////////////////////////////////////////
//
////////////////////////////////////////////////////
//
//  Input : 2024
//  Output : Leap Year
//
//  Input : 1900
//  Output : Not Leap Year
////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int Year)
{
    if((Year % 400) == 0)
    {
        printf("It is Leap Year");
    }
    else if((Year % 4) == 0 && (Year % 100) != 0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}
int main()
{
    int iYear = 0;
    
    printf("Enter Year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}