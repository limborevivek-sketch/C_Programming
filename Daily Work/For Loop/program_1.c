///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Write program which accepts number and print $ and *
//
///////////////////////////////////////
//
//  Input : 3
//  Output : $ * $ * $ *
//
//  Input : 4
//  Output : $ * $ * $ * $ *
//
//  Input : -3
//  Output : $ * $ * $ *
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}