#include<stdio.h>
void main()
{
    int i,num,sum=0;
    printf("Enter a number");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d natural numbers is %d",num,sum);
}