///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : write a program which accepts Distance in KM from user and converts it into meter
//
///////////////////////////////////////
//
//  Input : 5
//  Output : 5000
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMToMeter(int iNo)
{
    int iMeter = 1000;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMeter = iMeter * iNo;

    return iMeter;
}

int main()
{
    int iDistance = 0, iRet = 0;

    printf("Enter number of Distance to be convert : ");
    scanf("%d", &iDistance);

    iRet = KMToMeter(iDistance);

    printf("KM to Meter in : %d", iRet);

    return EXIT_SUCCESS;
}