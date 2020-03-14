#include<stdio.h>
int main()
{
    char ch;
    int a3,a,a1,a2,b,h1,h2,b3,h,d1,d2,b1,b2;
    printf("Enter the geometrical shape (rhombus(r),triangle(t),right triangle (s),trapezium(z),parallelogram(p)):");
    scanf("%c",&ch);


 switch (ch)
   {
    case 't':
    case 's':
     {
        printf("Enter the base and height value of the triangle");
        scanf("%d%d",&b,&h);
        a=b*h/2;
        printf("Area is %d",a);
        break ;
     }
    case 'p':
    {
        printf("Enter the value of base and height");
        scanf("%d%d",&b1,&h1);
        a1=b1*h1;
        printf("area is %d",a1);
        break ;
    }

    case 'r':
    {
        printf("Enter the value of diagonals");
        scanf("%d%d",&d1,&d2);
        a2=(1/2)*d1*d2;
        printf("area is %d",a2);
        break ;
    }

    case 'z':
    {
        printf("Enter the value of bases and height");
        scanf("%d%d%d",&b2,&b3,&h2);
        a3=(b2+b3)/2*h2;
        printf("area is %d",a3);
        break ;
    }
    default:
        printf("invalid geometry");


  }
    return 0;
  

}