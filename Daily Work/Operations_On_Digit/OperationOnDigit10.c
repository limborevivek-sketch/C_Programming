#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountDigit(int iNo)
{
     
    int iDigit = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0){

        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    
     return iSum;  
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountDigit(iValue);

    printf("Summation of this number is : %d\n", iRet);

    return EXIT_SUCCESS;
}