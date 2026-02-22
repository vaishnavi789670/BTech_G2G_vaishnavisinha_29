#include<stdio.h>
int main()
{   
    double a,b,c;
    char st;
    printf("Enter the operation you want to perform");
    scanf("%c",&st);
    printf("Enter the operands you want to perform operation on");
    scanf("%lf %lf",&a,&b);
    if(st=='+')
    {
       c=a+b;
       printf("Output= %lf",c);
    }
    else if(st=='-')
    {
        c=a-b;
        printf("Output= %lf",c);
    }
    else if(st=='*')
    {  
         c=a*b;
         printf("Output= %lf",c);
    }
    else if(st=='/')
    {   
        c=a/b;
        printf("Output= %lf",c);
    }
    else
    { 
        printf("Invalid Input");
    }
    return 0;
}
    
