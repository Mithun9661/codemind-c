#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    while(a>0)
    {
        int b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("%d",sum);
}