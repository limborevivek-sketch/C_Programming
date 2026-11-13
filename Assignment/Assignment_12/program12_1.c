/////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : accept number from user and display multiplication of factors
//
/////////////////////////////////////
//
//  Input : 12
//  Output : 144        (1*2*3*4*6)
//
/////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{

    int iCnt = 0, iMult = 0;

   for(iCnt = 1, iMult = 1; iCnt < iNo; iCnt++)
   {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
   }
 
    return iMult;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of Factor is : %d", iRet);


    return EXIT_SUCCESS;
}