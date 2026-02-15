#include<stdio.h>

int Add(int i, int j)
{
    int sum = 0;
    sum = i + j;
    return sum;
}

int main()
{
    int a = 0, b = 0, ans = 0;

    printf("Enter first number : \n");
    scanf("%d",&a);

    printf("Enter second number : \n");
    scanf("%d",&b);

    ans = Add(a,b);

    printf("Addition is : %d\n",ans);

    return 0;
}