#include<math.h>
#include<stdio.h>
int main()
{
    float p,r,t,si,ci;
    printf("Enter Principal Amount,Rate of Interest and Time period (one by one)","%d%f%d");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t/100);
    printf("Simple Interest= %f",si);
    ci=p*pow((1+r/100),t)-p;
    printf("\nCompound Interest= %f",ci);
}