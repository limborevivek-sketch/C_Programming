///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number as US dollar and return it into Indian currency
//
///////////////////////////////////////
//
//  Input : 1$
//  Output : 70 Rupees
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
     if(iNo < 0)
    {
        return -1;
    }

    int iRupees = 0;
    
    iRupees = 70;
    iRupees = iRupees * iNo;

    return iRupees;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Currency : $");
    scanf("%d", &iValue);

    iRet =  DollarToINR(iValue);

     if(iRet < 0)
    {
        printf("Currency Entered cannot be converted");
        return EXIT_FAILURE;
    }

    printf("Dollar To Rupees is : %d",iRet);

    return EXIT_SUCCESS;
}