#include<stdio.h>
#include<stdlib.h>

void reversetable(int ino)
{
     int iCnt = 0;

    if (ino < 0)
    {
       ino = -ino; 
    }

    for ( iCnt = 10; iCnt >= 1; iCnt--)
    {
       printf("%d\t",ino * iCnt);
    }
    printf("\n");

}
int main()
{
    int ivalue = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    reversetable(ivalue);

    return EXIT_SUCCESS;
}
