#include<stdio.h>
int main()
{
    int a; 
    float d;
    scanf("%d",&a);
    if(a<=10000)
    {
        d=a+(80*a/100)+(20*a/100);
        printf("%.2f",d);
    }
    else if(a<=20000)
    {
        d=a+(90*a/100)+(25*a/100);
        printf("%.2f",d);
    }
    else
    {
        d=a+(95*a/100)+(30*a/100);
        printf("%.2f",d);
    }
    return 0;
}