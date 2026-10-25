#include<stdio.h>
#include<stdlib.h>
void DisplayDigit(int iNo)
{
     
    int iDigit = 0;
    printf("Actual Number is = %d\n",iNo);  

    while(iNo != 0){
    iDigit = iNo % 10;
    printf("Number is %d\n",iDigit);
    iNo = iNo / 10;
    }
    
    printf("Final Value is = %d\n",iNo);  
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);


    DisplayDigit(iValue);
    return EXIT_SUCCESS;
}