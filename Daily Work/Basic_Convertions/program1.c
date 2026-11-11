///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : write a program which accepts radius from user and finds Area of Circle
//
///////////////////////////////////////
//
//  Input : 5.3
//  Output : 88.2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double Area = 0.0;

    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %.4lf\n", dRet);

    return EXIT_SUCCESS;
}