#include<stdio.h>
#include<stdlib.h>

void display(int iNo)
{
    int icnt = 0;
    icnt = 1;

    while(iNo > icnt)
    {
        printf("*\n");
        iNo--;

    }
}

int main() 
{
    int iValue = 0;

    printf("Enter number of Stars = ");
    scanf("%d", &iValue);

    display(iValue);

    return EXIT_SUCCESS;
}