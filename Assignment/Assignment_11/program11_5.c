/////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : accept range from user and display sum of all even numbers in between that range 
//
/////////////////////////////////////////
//
//  Input : 23
//  Output : 108
//
/////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayRevRange(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if((iStart > iEnd))
    {
        printf("Invalid");
    }
    else
    {
        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d\t", iCnt);
        }
    }
   
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point : ");
    scanf("%d", &iValue1);

    printf("Enter End point : ");
    scanf("%d", &iValue2);

    DisplayRevRange(iValue1, iValue2);

    return EXIT_SUCCESS;
}