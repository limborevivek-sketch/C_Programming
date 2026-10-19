#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

    bool Check(int iNo)
    {
        if((iNo % 5) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number = ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Number is divisible\n");
    }
    else
    {
        printf("Number is not divisible\n");
    }


    return EXIT_SUCCESS;
}