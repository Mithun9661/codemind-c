#include<stdio.h>
int main()
{
    int a=0,b,c;
    scanf("%d",&b);
    while(b>0)
    {
        c=b%10;
        a=a*10+c;
        b=b/10;
    }
    printf("%d",a);
}