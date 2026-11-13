//////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number from user and return the summation of even digits and odd digits
//
//////////////////////////////////////////
//
//  Input : 2395
//  Output : -15
//
//  Input : 1018
//  Output : 8
//
//////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountDifference(int iNo)
{
    int iSum1 = 0, iSum2 = 0, iSub = 0, iCount = 0, iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo/10;

        iSub = iSum1 - iSum2;
    }
    return iSub;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountDifference(iValue);

    printf("Difference is : %d", iRet);

    return EXIT_SUCCESS;
}