#include<stdio.h>
int main()
{
    int a,n,count=0;
    scanf("%d",&a);
    while(a>0)
    {
        n=a%10;
        count=count+1;
        a=a/10;
    }
    printf("%d",count);
    return 0;
}