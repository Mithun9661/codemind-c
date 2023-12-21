#include<stdio.h>
int main()
{
    int a,sum;
    scanf("%d",&a);
    sum=a%10;
    while(a>9)
    {
        a=a/10;
    }
    sum=sum+a;
    printf("%d",sum);
}