///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number and print even factors of given number
//
///////////////////////////////////////
//
//  Input : 5
//  Output : 8  (4*2)
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }

        return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial is : %d\n", iRet);

    return EXIT_SUCCESS;
}