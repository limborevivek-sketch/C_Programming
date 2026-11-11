///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : write a program which accepts area in square Ft from user and converts it into square meter
//
///////////////////////////////////////
//
//  Input : 5
//  Output : 0.464515
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double FeetoMeter(float fFeet)
{
    double dMeter = 0.0929;

    dMeter = fFeet * dMeter;

    return dMeter;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Square feet : ");
    scanf("%f", &fValue);

    dRet = FeetoMeter(fValue);

    printf("Converted value is : %.4lf", dRet);

    return EXIT_SUCCESS;
}