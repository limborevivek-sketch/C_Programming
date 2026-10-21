#include<stdio.h>
#include<stdlib.h>

void DisplayEvenFactor(int iNo)
{
    int icnt = 0;

    for(icnt = 2; icnt < iNo; icnt += 2)
    {
        if((iNo % icnt) == 0 && (iNo % 2) == 0)
        {
            printf("%d\n", icnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number = ");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return EXIT_SUCCESS;
}