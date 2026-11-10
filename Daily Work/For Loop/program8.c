////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Write a program to find factorial of given number
//
////////////////////////////////////
//
//  Input : 4 
//  Output : 24 -  1 * 2 * 3 * 4
//
////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

long long int Factorial(long long int iNo)
{
    unsigned long long int iCnt = 0;

    unsigned long long int Fact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
        return -1;
    }

    for(iCnt = 1, Fact = 1; iCnt <= iNo; iCnt++)
    {
        Fact = Fact * iCnt;
        printf("%llu\t\n", Fact);
    }
    return Fact;
}

int main()
{
    long long int iValue = 0;
    unsigned long long int iRet = 0;

    printf("Enter number to find factorial : ");
    scanf("%lli", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of : %llu", iRet);

    return EXIT_SUCCESS;
}