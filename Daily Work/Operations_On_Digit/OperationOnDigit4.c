#include<stdio.h>
#include<stdlib.h>
void DisplayDigit()
{
     int iNo =  1345700;
    
    printf("Actual Number is = %d\n",iNo);  

    printf("%d \n", iNo % 10);
    iNo = iNo / 10;

    printf("Number is = %d\n",iNo); 

     printf("%d \n", iNo % 10);
    iNo = iNo / 10;

    printf("Number is = %d\n",iNo);

     printf("%d \n", iNo % 10);
    iNo = iNo / 10;

    printf("Number is = %d\n",iNo);

     printf("%d \n", iNo % 10);
    iNo = iNo / 10;

    printf("Number is = %d\n",iNo);

     printf("%d \n", iNo % 10);
    iNo = iNo / 10;

    printf("Number is = %d\n",iNo);

     printf("%d \n", iNo % 10);
    iNo = iNo / 10;

    printf("Number is = %d\n",iNo);
    
     printf("%d \n", iNo % 10);
    iNo = iNo / 10;
    
    printf("Final Value is = %d\n",iNo);  
}
int main
()
{

    DisplayDigit();
    return EXIT_SUCCESS;
}