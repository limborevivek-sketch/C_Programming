#include<stdio.h>
#include<stdlib.h>
int main
()
{
    int iNo =  12457;

    printf("%d \n", iNo % 10);
    iNo = iNo / 10;

     printf("%d \n", iNo % 10);
    iNo = iNo / 10;

     printf("%d \n", iNo % 10);
    iNo = iNo / 10;

     printf("%d \n", iNo % 10);
    iNo = iNo / 10;

     printf("%d \n", iNo % 10);
    iNo = iNo / 10;

    return EXIT_SUCCESS;
}