#include<stdio.h>
int main()
{
    int nu,i,sum=0;
    scanf("%d",&nu);
    for(i=1;i<=nu;i++)
    {
        if(nu%i==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum-nu);
    return 0;
}