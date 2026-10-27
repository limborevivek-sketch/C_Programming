#include<stdio.h>
#include<stdlib.h>


float AvgDigit( int iNo)
{
    int iDigit = 0;
    float fCount = 0.0f, fSum = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while (iNo != 0)
    {

        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        fSum = fSum + iNo;
        fCount++;

    }
    
    return fCount / fSum;
  
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