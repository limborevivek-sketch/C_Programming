/////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : accept number from user and display it's factors in reverse order
//
/////////////////////////////////////
//
//  Input : 12
//  Output :  6 4 3 2 1
//
/////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int RevFact(int iNo)
{

    int iCnt = 0;

   for(iCnt = iNo - 1; iCnt > 1; iCnt--)
   {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);   
        }
   }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    RevFact(iValue);

    return EXIT_SUCCESS;
}