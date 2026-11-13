//////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number from user and return the multiplication of all digits
//
//////////////////////////////////////////
//
//  Input : 2395
//  Output : 270
//
//  Input : 1018
//  Output : 8
//
//////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultiplyDigit(int iNo)
{
    int iMulti = 0, iDigit = 0;
    iMulti = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            
        iNo = iNo/10;

        }
        iMulti = iMulti * iDigit;
    }
    return iMulti;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultiplyDigit(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}