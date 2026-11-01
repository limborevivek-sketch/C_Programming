// $ % 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Countfrequency(char *str)
{
    int CountSmall = 0, CountCapital = 0, CountDigits = 0;
    while(*str != '\0')
  {
    if((*str >= 'a')&&(*str <= 'z'))
    {
      CountSmall++;
    }
    else if((*str == 'A')&&(*str == 'Z'))
    {
      CountCapital++;
    }
    else 
    {
      CountDigits++;

    }
    
      str++;

  


  }
}
int main()
{
  char Arr[100] = {'\0'};
    int iRet = 0;
  printf("Enter String : ");
  scanf("%[^'\n']s", Arr);
  Countfrequency(Arr);

    printf("Frequency  : %d\n");

    return EXIT_SUCCESS;
}