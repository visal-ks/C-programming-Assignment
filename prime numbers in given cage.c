#include<stdio.h>
int main()
{
    int num1,num2, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &num1, you &num2);
    printf("Prime numbers between %d and %d are: ",num2,num2);
    while (num1<num2)
    {
        flag = 0; // if num1 is a non-prime number, flag will be 1
        for (i = 2; i <=num1 / 2; ++i)
        {
            if (num1 % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ",num1);
        num1++;
    }
    return 0;
}