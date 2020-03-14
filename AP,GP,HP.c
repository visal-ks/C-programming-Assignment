#include<stdio.h>
#include<math.h>
void main()
{
    char ch;
    float a,n,d,r,i,sum=0;
    printf("Enter the required type of series:(AP,GP,HP);");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'A':
        printf(" Enter the value of a,d,n");
        scanf("%f%f%f",&a,&d,&n);
        sum= ((n/2)*(2*a+(n-1)*d));
        printf("sum of the AP series is %f",sum);
        break;
    case 'G':
        printf("Enter the value of a,r,n");
        scanf("%f%f%f",&a,&r,&n);
        if(r<1)

            sum=(a*(1-pow(r,n))/(1-r));

        else
            sum=(a*(pow(r,n)-1)/(r-1));
        printf("The sum of the GP is %f",sum);
        break;
    case 'H':
        printf("Enter the values of a,d,n");
        scanf("%f%f%f",&a,&d,&n);
        for(i=0; i<n; i++)
           {
            sum=sum+(1/(a+i*d));
           }
        printf("The sum of the HP series is %f",sum);
        break;
    default :
        printf("Invalid selection");
        break;
    }
}