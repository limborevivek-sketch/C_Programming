#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int icnt = 0;
    bool bFlag = false;

    for(icnt = 2, bFlag = true; icnt <= iNo/2; icnt++)
    {
        if((iNo % icnt) == 0)
        {
           bFlag = false;
           break;
        }
    }
    return bFlag;

}

int main() 
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number = ");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not Prime");
    }

    return EXIT_SUCCESS;
}