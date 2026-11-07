////////////////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Batch : Logic Building 
//  Problem : Identify Character Type
//
////////////////////////////////////////////////////
//
////////////////////////////////////////////////////
//
//  Input : A
//  Output : Uppercase Alphabet
//
//  Input : m
//  Output : lowercase Alphabet
//
//  Input : 7
//  Output : Digit
//
//  Input : @
//  Output : Special Character
//
////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Entered Character is in Uppercase");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Entered Character is in lowercase");
    }
    else if((cValue >= 48) && (cValue <= 57))
    {
        printf("Enter Character is Digit");
    }
    else
    {
        printf("Enter character is special Character");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
