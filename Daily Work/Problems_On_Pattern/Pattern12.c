#include<stdio.h>
#include<stdlib.h>

void Pattern(int Row, int Column)
{
    int Count = 0, Cnt = 0;

    for(Count = 1; Count <= Row; Count++)
    {
        for(Cnt = 1; Cnt <= Column; Cnt++)
        {
            if((Count == Cnt))
            {
                printf("$\t");
            }
            else
            {
                printf("%d\t",Cnt);
            }
        }

        printf("\n\n");
    }

}

int main()
{
    int Row = 0, Column = 0;

    printf("Enter number of Rows : ");
    scanf("%d", &Row);

    printf("Enter number of Columns : ");
    scanf("%d", &Column);

    Pattern(Row, Column);

    return EXIT_SUCCESS;
}