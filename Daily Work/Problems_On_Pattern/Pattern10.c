#include<stdio.h>
#include<stdlib.h>

void Pattern(int Row, int Column)
{
    int Count = 0, Cnt = 0;
    char ch = '\0';

    for(Count = 1, ch = 'A'; Count <= Row; Count++, ch++)
    {
        for(Cnt = 1; Cnt <= Column; Cnt++)
        {
            printf("%c\t", ch);
        }
            printf("\n\n");
    }

}

int main()
{
    int Row = 0, Column = 0;

    printf("Enter number of Rows = ");
    scanf("%d", &Row);

    printf("Enter number of Rows = ");
    scanf("%d", &Column);

    Pattern(Row, Column);


    return EXIT_SUCCESS;
}