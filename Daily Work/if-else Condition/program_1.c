////////////////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Batch : Logic Building 
//  Problem : Find Greatest of Three Numbers
//
////////////////////////////////////////////////////
//
////////////////////////////////////////////////////
//
//  Input : 10  20  50
//  Output : 50 is Greatest
//
////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        printf("Greatest Number is : %d", iNo1);
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        printf("Greatest Number is : %d", iNo2);
    }
    else
    {
        printf("Greatest Number is : %d", iNo3);
    }
}

int main ()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    
    printf("Enter Number = ");
    scanf("%d", &iValue1);

    printf("Enter Number = ");
    scanf("%d", &iValue2);

    printf("Enter Number = ");
    scanf("%d", &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    

    return EXIT_SUCCESS;
}