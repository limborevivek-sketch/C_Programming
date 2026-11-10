////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : If number is less then 50 print less,
//            If number is between 50 and 100 print medium,
//            If number is greater then 100 print large.
//
////////////////////////////////////
//
//  Input : 40 
//  Output : Small
//
//  Input : 70 
//  Output : Medium
//
//  Input : 140 
//  Output : Large
//
////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        printf("Number is Negative and Invalid");
    }
    else if(iNo <= 50)
    {
        printf("Small");
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}