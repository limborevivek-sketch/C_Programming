//////////////////////////////////////////
//  
//  Name : Vivek Vilas Limbore
//  Problem : Check Admission Eligibility
//  Date : 18/10/2026
//
//////////////////////////////////////////
//
//  Input : 75 18 
//  Output : Eligible for admission
//
//  Input : 55 19
//  Output : Not Eligible
//
//  Input : -80 16 
//  Output : Invalid Marks and Age
//
//////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks <= 0) || (iAge <= 0))
    {
        printf("Invalid Marks and Age");
    }
    else if((fMarks >= 60) && (fMarks <= 100) && (iAge >= 17))
    {
        printf("Student is Eligible For Admission");
    }
    else
    {
        printf("Student is Not Eligible for Admission");
    }
}

int main ()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks : ");
    scanf("%f", &fMarks);

    printf("Enter Age : ");
    scanf("%d", &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}