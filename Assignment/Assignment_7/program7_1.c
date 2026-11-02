#include<stdio.h>
#include<stdlib.h>

void Pattern(int Row)
{
    int iCnt = 0;

    if(Row < 0)
    {
        Row = -Row;
    }
    for(iCnt = 1; iCnt <= Row; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{

    int iRow = 0;

    printf("Enter Number of Row's : ");
    scanf("%d",&iRow);

    Pattern(iRow);

    return EXIT_SUCCESS;
}