#include<stdio.h>
void main()
{
    int n,k,a[5],i,x=0;
    printf("enter the value for n and k");
    scanf("%d%d",&n,&k);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        x+=a[i];
    }
    printf("%d",x);
}
        
