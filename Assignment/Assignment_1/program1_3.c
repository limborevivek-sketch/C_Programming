#include<stdio.h>
#include<stdlib.h>

    void Display()
{
    int icnt = 0;

    icnt = 5;

    while(icnt >= 1)
    {
        printf("%d\n", icnt);
        icnt--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}