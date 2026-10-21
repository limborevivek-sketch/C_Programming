#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
int icnt = 0;
    printf("Factors of %d is = \n", iNo);
    for(icnt = 2; icnt < iNo; icnt+=2)
    {
        if((iNo % icnt) == 0)
        {
            printf("%d\n", icnt);
        }
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter number = ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}