#include<stdio.h>
int main()
{   
    float x;
    printf("Enter a number");
    scanf("%f",&x);
    if(x>0)
    {
        printf("The number is positive");
    }
    else if(x<0)
    {
        printf("The number is negative");
    }
    else if(x==0)
    {
        printf("The number is zero");
    }
    else
    {
        printf("The number is imaginary");
    }
    return 0;
}