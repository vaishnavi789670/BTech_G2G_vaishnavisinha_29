#include<stdio.h>
int main()
{   
    int a,b,c,d,e,s,p;
    printf("Enter marks of five subjects","%d%d%d%d%d");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    printf("SUM= %d",s);
    p=s/5;
    printf("\nPERCENTAGE= %d",p);
    return 0;
}