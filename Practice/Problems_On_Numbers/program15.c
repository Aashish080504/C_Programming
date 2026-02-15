#include<stdio.h>

void Display(int iFreqency)
{
    int iCnt = 0;

    iCnt = 1;

    // Filter
    if(iFreqency <= 0)
    {
        printf("Invalid Input...\n");
        return;
    }

    for(iCnt = 1; iCnt <= iFreqency; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iCount = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iCount);

    Display(iCount);

    return 0;
}