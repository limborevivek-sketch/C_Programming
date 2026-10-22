#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if((iNo1 > iNo2))
    {
        printf("Greater number is : %d", iNo1);
    }
    else
    {
        printf("Greatest number is : %d", iNo2);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue1);

    printf("Enter number : \n");
    scanf("%d", &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}