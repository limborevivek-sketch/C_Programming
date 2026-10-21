#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkVowel(char CValue)
{
    if((CValue == 'a') || (CValue == 'e') || (CValue == 'i') ||
      (CValue == 'o') || (CValue == 'u') ||

      (CValue == 'A') || (CValue == 'E') || (CValue == 'I') ||
      (CValue == 'O') || (CValue == 'U'))
      {
        return true;
      }
      else 
      {
        return false;
      }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character = ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return EXIT_SUCCESS;
}