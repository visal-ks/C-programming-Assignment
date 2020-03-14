#include<stdio.h>
int main()
{
    char ch;
    int r,perimeter,x,y,a,b,c;
    printf("Enter the geometry (circle(c),rectangle(r),triangle(t):");
    scanf("%c",&ch);


 switch (ch)
   {
    case 'c':
   
     {
        printf("Enter the radius of the circular section");
        scanf("%d",&r);
        perimeter=2*3.14*r;
        printf("perimeter of circle is %d",perimeter);
        break ;
     }
    case 'r':
    {
        printf("Enter the length and breadth value of the rectangle");
        scanf("%d%d",&x,&y);
        perimeter=2*(x+y);
        printf("perimeter of the rectangle  is %d",perimeter);
        break ;
    }

    case 't':
    {
        printf("Enter the value of sides of the triangle");
        scanf("%d%d%d",&a,&b,&c);
        perimeter=a+b+c;
        printf("perimeter of the triangle is %d",perimeter);
        break ;
    }
    default:
        printf("invalid geometry");


  }
    return 0;
  

}