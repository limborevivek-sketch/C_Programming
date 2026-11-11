///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number which returns difference between even and odd factorial of given number
//
///////////////////////////////////////
//
//  Input : 5
//  Output : -7  (8 -15)
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 0, iOddFact = 0;
    int iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iEvenFact = 1, iOddFact = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else 
        {
            iOddFact = iOddFact * iCnt;
        }

            iFact = iEvenFact - iOddFact;
    }
    return iFact;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d\n",iRet);

    return EXIT_SUCCESS;
}