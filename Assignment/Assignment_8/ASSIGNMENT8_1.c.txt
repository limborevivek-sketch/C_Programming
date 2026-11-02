#include<stdio.h>
#include<stdlib.h>

void number(int ino)
{

    if (ino < 50)
    {
        printf("it is small number");
    }
    else if (ino > 50 && ino < 100)
    {
        printf("it is medium number");
    }
    else if (ino > 100)
    {
        printf("it is large number");
        
    }

}
int main()
{
    int ivalue = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    number(ivalue);

    return EXIT_SUCCESS;
}
