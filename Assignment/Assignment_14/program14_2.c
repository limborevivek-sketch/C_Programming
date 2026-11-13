//////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number from user and return the count of odd digits
//
//////////////////////////////////////////
//
//  Input : 2395
//  Output : 3
//
//  Input : 4673
//  Output : 2
//
//////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
{
    int iCount = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}