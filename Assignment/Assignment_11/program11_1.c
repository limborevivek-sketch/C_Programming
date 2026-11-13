/////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : accept range from user and display all numbers in between that range 
//
/////////////////////////////////////////
//
//  Input : 3 10
//  Output : 3 4 5 6 7 8 9 10
//
/////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid");
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            printf("%d\t", iCnt);
        }
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Range : ");
    scanf("%d", &iValue1);

    printf("Enter Range : ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}