#include<stdio.h>
int main()
{
    float bs,hra,da;
    float pf,gs;
    scanf("%f",&bs);
    scanf("%f",&hra);
    scanf("%f",&da);
    pf=bs*0.12;
    gs=pf+bs+hra+da;
    printf("%0.2f
%0.2f",pf,gs);
    return 0;
}