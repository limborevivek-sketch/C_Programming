#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if((iAge <= 18) == 0)
    {
        printf("Person is Eligible to vote");
    }
    else
    {
        printf("Person is below Age");
    }
}

int main ()
{
    int iAge = 0;

    printf("Enter Age = ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);
    
    return EXIT_SUCCESS;
}