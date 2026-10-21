#include<stdio.h>
#include<stdlib.h>

    void PrintEven(int iNo)
    {
        int icnt = 0, iEven = 0;
        iEven = 2;
        
        
        for(icnt = 1; icnt <= iNo; icnt ++)
        {
            
            printf("%d\n", iEven);
            iEven = iEven + 2;
            
        }

    }

int main()

{
    int iValue = 0;

    printf("Enter number = ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}