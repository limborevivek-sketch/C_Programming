#include<stdio.h>
#include<stdlib.h>

void CalculateBill(int iUnits)
{
    float fBill = 0;

    if(iUnits < 0)
    {
        printf("Invalid Input\n");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill = %.2f\n", fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill = %.2f\n", fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Bill = %.2f\n", fBill);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter units consumed : ");
    scanf("%d", &iValue);

    CalculateBill(iValue);

    return 0;
}