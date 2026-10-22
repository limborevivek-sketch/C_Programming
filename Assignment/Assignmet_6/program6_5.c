#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0;

    if((fSalary <= 0) || (iYears < 0))
    {
        printf("Invalid Input\n");
    }
    else if(iYears > 10)
    {
        fBonus = fSalary * 15 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 10 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
    else
    {
        fBonus = fSalary * 5 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
}

int main()
{
    float fValue = 0;
    int iValue = 0;

    printf("Enter monthly salary : ");
    scanf("%f", &fValue);

    printf("Enter years of service : ");
    scanf("%d", &iValue);

    CalculateBonus(fValue, iValue);

    return 0;
}