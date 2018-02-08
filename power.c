#include<stdio.h>
void main()
{
    int x,y,i,power=1;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the power of the number");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        power=power*x;
    }
    printf("%d^%d=%d",x,y,power);
}
