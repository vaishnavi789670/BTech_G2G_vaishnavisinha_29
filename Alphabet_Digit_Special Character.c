
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the symbol");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 && ch>=97 && ch<=122)
    {
        printf("The symbol is an Alphabet");
    }
    else if(ch>=0 && ch<=9)
    {
        printf("The symbol is a Digit");
    }
    else if(ch>=32 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=126)
    {
        printf("The symbol is a Special Character");
    }
    return 0;
}