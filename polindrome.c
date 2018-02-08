#include <stdio.h>
void main()
{
    int n,x1 = 0, rem, x;

    printf("Enter an integer: ");
    scanf("%d", &n);

    x = n;
    while( n!=0 )
    {
        rem = n%10;
        x1 = x1*10 + rem;
        n /= 10;
    }
    if (x == x1)
        printf("%d is a palindrome.", x);
    else
        printf("%d is not a palindrome.", x);
    
}
