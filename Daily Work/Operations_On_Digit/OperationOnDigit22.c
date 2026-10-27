#include<stdio.h>
#include<stdlib.h>

int Reverse(int iNo)
{
    int iDigit = 0, irev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        irev = (irev * 10) + iDigit;
        iNo = iNo/10;
    }
    return irev;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Number : ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("Reversed Number = %d\n", iRet);

    return EXIT_SUCCESS;
}