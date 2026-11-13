/////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : accept number from user and display all it's non factors 
//
/////////////////////////////////////
//
//  Input : 12
//  Output :  5 7 8 9 10 11
//
/////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int NonFact(int iNo)
{

    int iCnt = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

   for(iCnt = 1; iCnt < iNo; iCnt++)
   {
        if((iNo % iCnt) != 0)
        {
              iSum = iSum + iCnt;
        }
   }

   return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = NonFact(iValue);

    printf("Summation is : %d", iRet);

    return EXIT_SUCCESS;
}