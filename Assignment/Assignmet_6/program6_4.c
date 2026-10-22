#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 <= 0) || (iSide2 <= 0) || (iSide3 <= 0))
    {
        printf("Invalid Triangle\n");
    }
    else if((iSide1 + iSide2 > iSide3) &&
            (iSide2 + iSide3 > iSide1) &&
            (iSide1 + iSide3 > iSide2))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter three sides : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    CheckTriangle(iValue1, iValue2, iValue3);

    return 0;
}