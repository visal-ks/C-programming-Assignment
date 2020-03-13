#include<stdio.h>

int main()
{
    int c,n,fact=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(c=1; c<=n;c++)
        fact=fact*c;
    printf("The factorial of %d=%d",n,fact);
    return 0;
}