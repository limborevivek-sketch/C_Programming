#include<stdio.h>
#include<stdlib.h>

void Pattern(int Row, int Column)
{
    int Count = 0, Cnt = 0;

    for(Count = 1; Count <= Row; Count++)
    {
        for(Cnt = 1; Cnt <= Column; Cnt++)
        {
            if((Cnt % 2) == 0)
            {
                printf("@\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iRow = 0, iColumn = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iRow);

    printf("Enter number of Columns : ");
    scanf("%d",&iColumn);

    Pattern(iRow, iColumn);

    return EXIT_SUCCESS;
}