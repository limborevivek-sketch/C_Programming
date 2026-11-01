// $ % 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountSpecialX(char *str)
{
    int iCountX = 0;

    while((*str != '\0'))
    {
        if((*str >= '$') || (*str <= '%')|| (*str <= '&')|| (*str <= '*') || (*str <= '&'))
        {
            iCountX++;
        }
        
        str++;
    }
    return iCountX;
}
int main()
{
  char Arr[100] = {'\0'};
    int iRet = 0;
  printf("Enter String : ");
  scanf("%[^'\n']s", Arr);

    iRet = CountSpecialX(Arr);

    printf("Frequency of Special Letters : %d\n", iRet);

    return EXIT_SUCCESS;
}