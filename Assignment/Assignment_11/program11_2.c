/////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : accept range from user and display all even numbers in between that range 
//
/////////////////////////////////////////
//
//  Input : 3 10
//  Output : 4 6 8 10
//
/////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenRange(int iStart, int iEnd)
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
            if((iCnt % 2) == 0)
            {
                printf("%d\t", iCnt);
            }
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Range : ");
    scanf("%d", &iValue1);

    printf("Enter End point : ");
    scanf("%d", &iValue2);

    DisplayEvenRange(iValue1, iValue2);

    return EXIT_SUCCESS;
}