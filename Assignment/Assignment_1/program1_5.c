#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("%d * \n",icnt);
    }
}

int main () 
{
    int iValue = 0;
    
    printf("Enter number = ");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}