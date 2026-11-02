#include<stdio.h>
#include<stdlib.h>

int factorial(int ino)
{
    int ifact = 1;
    int iCnt = 0;

    if (ino < 0)
    {
       ino = -ino; 
    }

    for ( iCnt = 1; iCnt <= ino; iCnt++)
    {
        ifact = ifact * iCnt;
    }

    return ifact;

}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    iret=factorial(ivalue);

    printf("factorial is %d\n",iret);

    return EXIT_SUCCESS;
}
