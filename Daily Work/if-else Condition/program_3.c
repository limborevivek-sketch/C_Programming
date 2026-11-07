////////////////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Batch : Logic Building 
//  Problem : Calculate Students Grade
//
////////////////////////////////////////////////////
//
////////////////////////////////////////////////////
//
//  Input : 85
//  Output : Grade B
//
//  Input : 35
//  Output : Fail
//
////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float Marks)
{
    if((Marks > 100) || (Marks < 0))
    {
        printf("Invalid Marks");
    }
    else if(Marks == 100)
    {
        printf("A+ Grade");
    }
    else if(Marks >= 90)
    {
        printf("A Grade");
    }
    else if(Marks >= 85)
    {
        printf("B+ Grade");
    }
    else if(Marks >= 75)
    {
        printf("B Grade");
    }
    else if(Marks >= 60)
    {
        printf("c Grade");
    }
    else if(Marks >= 40)
    {
        printf("D Grade");
    }
     else
    {
        printf("Fail");
    }

   
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks = ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}