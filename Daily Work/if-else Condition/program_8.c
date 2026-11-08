//////////////////////////////////////////
//  
//  Name : Vivek Vilas Limbore
//  Problem : Calculate Shopping Discount
//  Date : 18/10/2026
//
//////////////////////////////////////////
//
//  Input : 800 
//  Output : Payable Amount = 800.00
//
//  Input : 2000
//  Output : Payable Amount = 1800.00
//
//  Input : 6000 
//  Output : Payable Amount = 4800.00
//
//////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount <= 0)
    {
        printf("Invalid");
    }
    else if((fAmount >= 1000) && (fAmount <= 5000))
    {
        fDiscount = 10;
        fFinalAmount = fAmount - (fAmount / 100) * fDiscount;
        printf("Payable Amount : %.2f", fFinalAmount);
    }
    else if(fAmount >= 5000)
    {
        fDiscount = 20;
        fFinalAmount = fAmount - (fAmount / 100) * fDiscount;
        printf("Payable Amount : %.2f", fFinalAmount);
    }
    else
    {
        printf("Payable Amount : %.2f", fAmount);
    }
}

int main ()
{
    float fAmount = 0.0f;

    printf("Enter Amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}