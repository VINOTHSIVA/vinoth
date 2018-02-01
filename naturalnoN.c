#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("enter the positive integer");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum+=i; 
    }
    printf("%d",sum);
    return 0;
}
