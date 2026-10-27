#include<stdio.h>
#include<stdlib.h>


void display(int iNo)
{
    int iDig = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        
        iDig = iNo % 10;
        if(iDig % 2 == 0)
        {
            printf(" %d is Even : ", iDig);
        }
        else
        {
            printf("%d is Odd : ", iDig);
        }
        iNo = iNo / 10;
    }
}
int main()
{

    int iValue = 0;
    printf("Num bb : ");
    scanf("%d", &iValue);
    
    display(iValue);
    
    return EXIT_SUCCESS;
}