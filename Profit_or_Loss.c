#include<stdio.h>
int main()
{
    int cps,sp;
    scanf("%d%d",&cps,&sp);
    if(cps>sp)
    {
        printf("Loss");
    }
    else if(cps<sp)
    {
        printf("Profit");
    }
    else
    {
        printf("No Profit and No Loss");
    }
    return 0;
}