#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0;
    float fFinalAmount = 0;

    if(fAmount < 0)
    {
        printf("Invalid Input\n");
    }
    else if(fAmount < 1000)
    {
        fFinalAmount = fAmount;
        printf("Final Amount = %.2f\n", fFinalAmount);
    }
    else if(fAmount < 5000)
    {
        fDiscount = fAmount * 10 / 100;
        fFinalAmount = fAmount - fDiscount;

        printf("Final Amount = %.2f\n", fFinalAmount);
    }
    else
    {
        fDiscount = fAmount * 20 / 100;
        fFinalAmount = fAmount - fDiscount;

        printf("Final Amount = %.2f\n", fFinalAmount);
    }
}

int main()
{
    float fValue = 0;

    printf("Enter purchase amount : ");
    scanf("%f", &fValue);

    CalculateDiscount(fValue);

    return 0;
}