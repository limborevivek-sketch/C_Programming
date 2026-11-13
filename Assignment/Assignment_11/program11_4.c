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

int SumofEvenRange(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        return -1;
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
            iSum = iSum + iCnt;
            }
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point : ");
    scanf("%d", &iValue1);

    printf("Enter End point : ");
    scanf("%d", &iValue2);

    iRet = SumofEvenRange(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid");
    }
    else
    {
        printf("Sum of Range is : %d", iRet);
    }
    return EXIT_SUCCESS;
}