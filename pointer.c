#include<stdio.h>
void main()
{
    int icecream,pen,bat;
    int *n,n1;
    printf("\n1.icecream,\n2.pen,\n3.bat\n");
    scanf("%d",&n1);
    if(n1==1)
    {
        n=&icecream;
        printf("icecream are found in rack number %d",n);
    }
    else if(n1==2)
    {
        n=&pen;
        printf("pen are fount in rack number %d",n);
    }
    else if(n1==3)
    {
        n=&bat;
        printf("bat are found in rack number %d",n);
    }
    else
    {
        printf("we don't  have that product.sorry...");
    }
    
}
