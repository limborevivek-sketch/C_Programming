#include<stdio.h>
#include<stdlib.h>

void table(int ino)
{
    int iCnt = 0;

    if (ino < 0)
    {
       ino = -ino; 
    }

    for ( iCnt = 1; iCnt <= 10; iCnt++)
    {
       printf("%d\t",ino * iCnt);
    }

}
int main()
{
    int ivalue = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    table(ivalue);

    return EXIT_SUCCESS;
}
