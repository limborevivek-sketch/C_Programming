////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept Single digit number and print it into word
//
////////////////////////////////////
//
//  Input : 4 
//  Output : four
//
//  Input : -7 
//  Output : Seven
//
//  Input : 14
//  Output : Invalid
//
////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Zero");
    }
    else if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}