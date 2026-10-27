#include<stdio.h>
#include<stdlib.h>

void DisplayEvenDigit(int iNo)
{
int iDigit = 0;

if(iNo < 0)
{
    iNo = -iNo;
}

while(iNo != 0)
{

    iDigit = iNo % 10;
    if((iDigit % 2) == 0)
    {                                   //This if is used to print only Even digits e.g  input 1,2,3,4 = output 4,2;
    printf("%d\n", iDigit);
    }
    iNo = iNo / 10;

}
}

int main ()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayEvenDigit(iValue);

    return EXIT_SUCCESS;
}