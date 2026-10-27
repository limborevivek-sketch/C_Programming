#include<stdio.h>
#include<stdlib.h>
int CountDigit(int iNo)
    {
        int iCount = 0;
        int iDigit = 0;
        
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while(iNo != 0){
            iDigit = iNo % 10;          
            iNo = iNo/10;                           
            iCount++;
            
        }
       return iCount;
    }
int display(int iNo)
{
    int iDig = 0, isum = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {

        iDig = iNo % 10;
        isum = isum + iDig;
        printf("%d \n",iDig);
        iNo = iNo / 10;
    }
    return isum;
}

float AvgDigits(int iTotal, int iFrequency)
{
    float fAns = 0.0f;

    fAns = (float)iTotal/ (float)iFrequency;

    return fAns;
}

int main()
{

    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("Num bb : ");
    scanf("%d", &iValue);

    iSum = display(iValue);
    iCount = CountDigit(iValue);

    fAvg = AvgDigits(iSum, iCount);
    
    printf("Number is : \n", iSum);
    printf("Summation is : \n", iCount);
    printf("Avg is : %.2f\n", fAvg);

    return EXIT_SUCCESS;
}