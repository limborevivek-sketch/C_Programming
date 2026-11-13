/////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number from user and return difference between summation of all it's non factors and factors
//
/////////////////////////////////////
//
//  Input : 12
//  Output : 34
//
/////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int NonFact(int iNo1)
{

    int iCnt = 0, iSum = 0, iSum1 = 0, iSum2 = 0;

    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }

   for(iCnt = 1; iCnt < iNo1; iCnt++)
   {
        if((iNo1 % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }

            iSum = iSum2 - iSum1;
   }

   return iSum;
}

int main()
{
    int iValue1 = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue1);

    iRet = NonFact(iValue1);

    printf("Difference is : %d",iRet);

    return EXIT_SUCCESS;
}