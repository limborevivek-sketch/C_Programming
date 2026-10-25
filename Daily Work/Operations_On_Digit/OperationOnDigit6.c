#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int DisplayDigit(int iNo)
{
     
    int iDigit = 0, iOriginal = iNo;
    printf("Actual Number is = %d\n",iNo);  

    while(iNo != 0){

    iDigit = iNo % 10;
    printf("Number is %d\n",iDigit);
    iNo = iNo / 10;
    
    }
    return iOriginal;
     
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = DisplayDigit(iValue);

    printf("Output is of this number : %d\n", iRet);

    return EXIT_SUCCESS;
}