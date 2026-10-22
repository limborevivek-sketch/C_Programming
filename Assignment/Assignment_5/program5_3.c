#include<stdio.h>
#include<stdlib.h>
void DisplayGrade(float marks)
{
   if(marks >= 90)
   {
    printf("A grade");
   }
   else if(marks >= 80)
   {
   printf("B grade");
   }
   else if(marks >= 70)
   {
    printf("C grade");
   }
   else if(marks >= 50)
   {
    printf("D grade");
   }
   else
   {
    printf("Fail");
   }
}

int main()
{
    float iMarks = 0;

    printf("Enter Marks : ");
    scanf("%f", &iMarks);

    DisplayGrade(iMarks);

    return EXIT_SUCCESS;
}