#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountDigit(int iNo)
{
     
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0){

    iDigit = iNo % 10;           //This part is used to Split the number 
    printf("%d\n", iDigit);     //This printf will display each digit which is Splitted
    iNo = iNo / 10;            //It is used to reduce the digit for further operation
    iCount++;                 //it will count total number of digits

    }
    
     return iCount;  
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountDigit(iValue);

    printf("Output is of this number : %d\n", iRet);

    return EXIT_SUCCESS;
}