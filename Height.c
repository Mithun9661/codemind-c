#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x<y){
        printf("%d",y);
    }
    else{
        printf("%d",x);
    }
    return 0;
}