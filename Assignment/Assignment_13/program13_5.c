//////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number from user and check how many times 4 appears
//
//////////////////////////////////////
//
//  input : 1234
//  output : 4
//           
//  input: 1239
//  output : 3
//
//////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountFreq(int iNo)
{
    int iDigit = 0, iCount = 0;


    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo/10;
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");

    scanf("%d", &iValue);

    iRet = CountFreq(iValue);


    printf("%d", iRet);

    EXIT_SUCCESS;
}