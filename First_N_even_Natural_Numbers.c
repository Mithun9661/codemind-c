#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=x*2;i>=1;i--)
    {
         if(i%2==0)
         {
             printf("%d ",i);
         }
    }
}