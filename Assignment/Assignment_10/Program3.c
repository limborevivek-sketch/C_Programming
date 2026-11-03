//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Vivek Limbore
//  Batch       : LB - Assignment 10
//////////////////////////////////////////////////////////////////////
//  
// Q.5) program to calculate Area of Circle 
//      
//  
// Input  : 5.3
// Output : 88.2026
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMETER(int iNo)
{
    int iKM = iNo * 1000;

    return iKM;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Distance in KM : \n");
    scanf("%i",&iValue);

    iRet = KMtoMETER(iValue);

    printf("Conversion is : %d\n",iRet);

    return EXIT_SUCCESS;
}
