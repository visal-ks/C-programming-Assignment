#include<stdio.h>

int main()
{
    int a,b,num1,num2,s,GCD,LCM;
    printf("Enter any two numbers");
    scanf("%d%d",&num1,&num2);
    a=num1;
    b=num2;
    while(b!=0)
    {
        s=b;
        b=a%b;
        a=s;
    }
    GCD=a;
    LCM=(num1*num2)/GCD;
    printf("GCD of %d and %d is %d\n",num1,num2,GCD);
    printf("LCM of %d and %d is %d\n",num1,num2,LCM);
    return 0;
}