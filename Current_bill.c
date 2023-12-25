#include<stdio.h>
int main()
{
    int a;
    float c;
    scanf("%d",&a);
    if(a<200){
        printf("%.2f",a*1.20+100.00);
    }else if(a>=200&&a<400)
    {
        printf("%.2f",a*1.50+100.00);
    }
    else if(a>=400&&a<600)
    {
        c=(a*1.80)/100*15;
        printf("%.2f",a*1.80+c);
    }
    else
    {
        c=(a*2.00)/100*15;
        printf("%.2f",a*2.00+c);
    }
    return 0;
}