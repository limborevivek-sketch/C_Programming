////////////////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Batch : Logic Building 
//  Problem : Check Divisibility by 3 and 5
//
////////////////////////////////////////////////////
//
////////////////////////////////////////////////////
//
//  Input : 15
//  Output : Divisible by both
//
//  Input : 35
//  Output : Divisible by 5
//
//  Input : 9
//  Output : Divisible by 3
//
//  Input : 7
//  Output : Number is Divisible
//
////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{

    if((iValue % 3) == 0 && (iValue % 5) == 0)
    {
        printf("Divisible by Both");
    }
    else if((iValue % 3) == 0)
    {
        printf("Number is only Divisible by 3");
    }
    else if((iValue % 5) == 0)
    {
        printf("Number is only Divisible by 5");
    }
    else
    {
        printf("Number is not divisible by any");
    }

}

int main ()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}