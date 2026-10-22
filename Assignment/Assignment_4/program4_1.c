#include<stdio.h>
#include<stdlib.h>

    void CheckNumber(int iNo)
    {
        if(iNo > 0)
        {
            printf("Number is Positive\n");
        }
        else if(iNo < 0)
        {
            printf("Number is Negative\n");
        }
        else
        {
            printf("Number is Zero\n");
        }
    }

int main ()
{
    int iValue = 0;

    printf("Enter a number = ");
    scanf("%d", &iValue);

    CheckNumber(iValue);
    
    return EXIT_SUCCESS;
}