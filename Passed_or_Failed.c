#include<stdio.h>
int main()
{
    int eng,maths,phy,che,cs;
    scanf("%d%d%d%d%d",&eng,&maths,&phy,&che,&cs);
    if((eng+maths+phy+che+cs)/5>34&&eng>34&&maths>34&&phy>34&&che>34&&cs>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
     return 0;
}