///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : write a program which accepts temperature in Fahrenheit from user and converts it into celsius
//
///////////////////////////////////////
//
//  Input : 10
//  Output : 12.22222
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0;

    dCelsius = ((fTemp - 32) * 5/9);

    return dCelsius;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature is : %lf", dRet);

    return EXIT_SUCCESS;
}