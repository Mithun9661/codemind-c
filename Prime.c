#include<stdio.h>
int main()
{
    int x,i,count=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}