#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo % 2) == 0)
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
    bool bret = false;

    printf("Enter number = ");
    scanf("%d", &iValue);

    bret = Check(iValue);

    if(bret == true)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is ODD");
    }
    
    return EXIT_SUCCESS;
}