#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the vlues of a");
    scanf("%d",&a);
    printf("enter the values of b");
    scanf("%d",&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
}
int add(a,b)
{
int x;
x=a+b;
printf("%d\n",x);
}
int sub(a,b)
{
    int x;
    x=a-b;
    printf("%d\n",x);
}
int mul(a,b)
{
    int x;
    x=a*b;
    printf("%d\n",x);
}
int div(a,b)
{
    int x;
    x=a/b;
    printf("%d\n",x);
}
