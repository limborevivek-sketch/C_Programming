#include<stdio.h>
#include<stdlib.h>

void Pattern(int Row, int Column)
{
    int iCount = 0, iCnt = 0;

    for(iCount = 1; iCount <= Row; iCount++)
    {
        for(iCnt = 1; iCnt <= Column; iCnt++)
        {
            printf("#\t");
        }
        printf("\n\n");
    }

}

int main()
{
     int iRow = 0, iColumn = 0;

     printf("Enter Number of Rows : ");
     scanf("%d",&iRow);

     printf("Enter Number of Columns : ");
     scanf("%d",&iColumn);

     Pattern(iRow, iColumn);

    return 0;
}