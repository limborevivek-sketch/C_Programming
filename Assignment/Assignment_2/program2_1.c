/*
    Below code is done using while loop
*/
#include<stdio.h>
#include<stdlib.h>

    void Display(int iNo)
    {
        int icnt = 0;

        icnt = 1;
        while(icnt <= iNo)
        {
            printf("*\n");
            icnt++;
        }
    }

int main() 
{
    int iValue = 0;

    printf("Enter number of stars = ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}