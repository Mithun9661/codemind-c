#include<stdio.h>
int main()
{
    int x,a,b=0;
    scanf("%d",&x);
    int temp=x;
    while(x>0)
    {
        a=x%10;
        b=b*10+a;
        x=x/10;
    }
    if(b==temp)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}