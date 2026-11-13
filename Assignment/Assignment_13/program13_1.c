//////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number from user and display it's digits in reverse order
//
//////////////////////////////////////
//
//  input : 1234
//  output : 4
//           3
//           2
//           1
//
//////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}