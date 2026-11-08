//////////////////////////////////////////
//  
//  Name : Vivek Vilas Limbore
//  Problem : Calculate Electricity Bill
//  Date : 18/10/2026
//
//////////////////////////////////////////
//
//  Input : 80 
//  Output : Bill = 400
//
//////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = '0.0f';

    if(iUnits < 0)
    {
        printf("Invalid");
    }
    else if((iUnits <= 100))
    {
        fBill = iUnits * 5;
        printf("Bill = %.2f", fBill);
    }
    else if((iUnits >= 100) && (iUnits <= 200))
    {
        fBill = (iUnits * 5) + ((iUnits - 100) * 7);
        printf("Bill = %.2f", fBill);
    }
    else
    {
        fBill = (iUnits * 5) + (iUnits * 7) + ((iUnits - 200) * 10);
        printf("Bill = %.2f", fBill);
    }
}

int main ()
{
    int iUnits = 0;

    printf("Enter number of Units consumed : ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}