#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFreq)
{
    int icnt = 0;

    for(icnt = 0; icnt < iFreq; icnt++)
    {
        printf("%d\n", iNo);
    }
}

int main () 
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number = ");
    scanf("%d", &iValue);

    printf("Enter number = ");
    scanf("%d", &iCount);

        Display(iValue, iCount);

    return EXIT_SUCCESS;
}