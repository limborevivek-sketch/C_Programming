//////////////////////////////////////////
//  
//  Name : Vivek Vilas Limbore
//  Problem : Calculate Employee Bonus
//  Date : 18/10/2026
//
//////////////////////////////////////////
//
//  Input : 30000 12
//  Output : Bonus = 4500
//
//  Input : 2000
//  Output : Bonus = 2000
//
//  Input : 10000 
//  Output : Bonus = 500
//
//////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if((iYears <= 0) || (fSalary <= 0))
    {
        printf("Invalid");
    }
    else if(iYears >= 10)
    {
        fBonus = (fSalary * 15) / 100; 
        printf("Bonus Received : %.2f", fBonus);
    }
    else if((iYears >= 5) && (iYears <= 10))
    {
        fBonus = (fSalary * 10) / 100;
        printf("Bonus Received : %.2f", fBonus);
    }
    else
    {
        fBonus = (fSalary * 5) / 100;
        printf("Bonus Received : %.2f", fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary : ");
    scanf("%f", &fSalary);

    printf("Enter number of years service provided : ");
    scanf("%d", &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}