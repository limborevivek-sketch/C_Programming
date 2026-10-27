#include<stdio.h>
#include<stdlib.h>


float AvgDigit( int iNo)
{
    int iDigit = 0, iCount = 0, iSum = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }    

    while(iNo < 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount ++;
        iNo = iNo/10;
    }
    fAvg = (float)iSum/(float)iCount;        

   return fAvg;
}
int main()
{

    int iValue = 0;
    float fret = 0.0f;

    printf("Num bb : ");
    scanf("%d", &iValue);
    
    fret = AvgDigit(iValue);
    
    printf("Avg is : %f\n", fret);

    return EXIT_SUCCESS;
}