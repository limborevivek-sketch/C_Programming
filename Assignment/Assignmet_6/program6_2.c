#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks < 0) || (fMarks > 100) || (iAge < 0))
    {
        printf("Invalid Input\n");
    }
    else if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fValue = 0;
    int iValue = 0;

    printf("Enter marks : ");
    scanf("%f", &fValue);

    printf("Enter age : ");
    scanf("%d", &iValue);

    CheckAdmission(fValue, iValue);

    return 0;
}