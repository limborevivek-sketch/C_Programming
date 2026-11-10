////////////////////////////////////
//  
//  Name : Vivek Vilas limbore
//  Problem : Accept number from user and display it's table
//
////////////////////////////////////
//
//  Input : 2
//  Output : 2 4 6 8 10 12 14 16 18 20
//
////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number = ");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}
