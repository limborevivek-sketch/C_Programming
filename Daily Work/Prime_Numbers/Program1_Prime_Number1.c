#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int iNo)
{
    int icnt = 0;
    int iSum = 0;

    for(icnt = 1; icnt<= iNo; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            iSum = iSum + icnt;
        }
    }

    if(iSum == 1)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }
}

int main ()
{
    int iValue = 0;

    printf("Enter number = ");
    scanf("%d", &iValue);

    return EXIT_SUCCESS;
}