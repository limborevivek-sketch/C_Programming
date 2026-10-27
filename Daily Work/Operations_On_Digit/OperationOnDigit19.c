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

int main()
{

    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("Num bb : ");
    scanf("%d", &iValue);

    iSum = display(iValue);
    iCount = CountDigit(iValue);

    fAvg = (float)iSum/(float)iCount;
    
    fAvg = AvgDigit(iValue);
    
    printf("Number is : ", iSum);
    printf("Summation is : ", iCount);
    printf("Avg is : %.2f\n", fAvg);

    return EXIT_SUCCESS;
}