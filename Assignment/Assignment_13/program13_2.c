//////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number from user and check whether it contains 0 in it or not.
//
//////////////////////////////////////
//
//  input : 1234
//  output : There is no zero
//           
//  input: 1032
//  output : There is zero  
//
//////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)             //1234
    {

    if((iNo % 10) == 0)
        {
            iDigit = iNo / 10;
            return TRUE;
        }
    else
        {
            iDigit = iNo % 10;
            iNo = iNo/10;
        }
        
    }
    return FALSE;    

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CheckZero(iValue);

    if(iRet == TRUE)
    {
        printf("It contain zero");
    }
    else
    {
        printf("It do not has Zero");
    }

    return EXIT_SUCCESS;
}