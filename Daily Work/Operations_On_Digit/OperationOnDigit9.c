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

    iDigit = iNo % 10;           //This part is used to Split the number 

    printf("%d\n", iDigit);     //This printf will display each digit which is Splitted

    iNo = iNo / 10;            //It is used to reduce the digit for further operation

    iSum = iSum + iDigit;     // This part will do the sum of Digits

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