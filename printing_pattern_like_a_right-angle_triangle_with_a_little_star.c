#include<stdio.h>
int main()
{
    int x,j,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    return 0;
}