//////////////////////////////////////////
//  
//  Name : Vivek Vilas Limbore
//  Problem : Check Triangle Validity
//  Date : 18/10/2026
//
//////////////////////////////////////////
//
//  Input : 3 4 5
//  Output : Valid
//
//  Input : 1 2 3
//  Output : Valid
//
//  Input : 0 2 4 
//  Output : Invalid
//
//////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 <= 0) || (iSide2 <= 0) || (iSide3 <= 0))
    {
        printf("Invalid Triangle");
    }
    else if((iSide1 + iSide2 > iSide3) && (iSide1 + iSide3 > iSide2) && (iSide2 + iSide3 > iSide1))
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter Three sides of Triangle : ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}