#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("%d",i);
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("%d",a*b);
    }
    return 0;
}