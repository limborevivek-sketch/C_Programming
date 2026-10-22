#include<stdio.h>
#include<stdlib.h>

void CheckCharacter(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase alphabet");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase alphabet");
    }
    else
    {
        printf("Special character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c", &cValue);

    CheckCharacter(cValue);

    return EXIT_SUCCESS;
}