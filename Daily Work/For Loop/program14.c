///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number and find odd factorials
//
///////////////////////////////////////
//
//  Input : 5
//  Output : 15  (5 * 2 * 1)
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }


    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Factorial is : %d", iRet);

    return EXIT_SUCCESS;
}