#include<stdio.h>
int main()
{   int a,b,c;
    printf("Enter values for a and b","%d%d");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Value for a %d",a);
    printf("\nValue for b %d",b);
    return 0;
}