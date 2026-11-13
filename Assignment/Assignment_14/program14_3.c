//////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number from user and return the count of digits between 3 and 7
//
//////////////////////////////////////////
//
//  Input : 2395
//  Output : 7
//
//  Input : 4673
//  Output : 4
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

        if((iDigit >= 3) && (iDigit <= 7))
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