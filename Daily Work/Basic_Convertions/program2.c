///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : write a program which accepts height and width from user and finds Area of rectangle
//
///////////////////////////////////////
//
//  Input : 5.3 9.78
//  Output : 51.834
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fHeight, float fWidth)
{
    double Area = 0.0;

    if(fHeight < 0)
    {
        fHeight = -fHeight;
    }
     if(fWidth < 0)
    {
        fWidth = -fWidth;
    }
    

    Area = fHeight * fWidth;

    return Area;

}

int main()
{
    float fHeight = 0.0f, fWidth = 0.0f;
    double dRet = 0.0;

    printf("Enter Height : ");
    scanf("%f", &fHeight);

    printf("Enter Width : ");
    scanf("%f", &fWidth);

    dRet = RectArea(fHeight,fWidth);

    printf("Area of Rectangle is : %.3lf", dRet);

    return EXIT_SUCCESS;
}