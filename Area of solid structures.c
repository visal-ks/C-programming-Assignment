#include<stdio.h>
int main()
{
    char ch;
    int SA,v,r,l,b,h,a;
    printf("Enter the geometrical shape (cube(1),cylinder(2),cuboids(3),sphere(4)):");
    scanf("%c",&ch);


 switch(ch)
   {


    case '1':
    
     {
        printf("Enter the  value of one side  of cube");
        scanf("%d",&a);
        SA=6*a*a;
        v=a*a*a;
        printf(" surface Area is %d",SA);
        printf(" volume of the cube is %d",v);
        break;
     }
    case '2' :
    {
        printf("Enter the radius and height value of the cylinder");
        scanf("%d%d",&r,&h);
        SA=3.14*r*r*h;
        v=2*3.14*r*h+3.14*r*r;
        printf(" surface area is %d",SA);
        printf("volume of the cylinder is %d",v);
        break;
    }

    case '3' :
    {
        printf("Enter the length,breadth,width value of a cuboid");
        scanf("%d%d%d",&l,&b,&h);
        SA=l*b*h;
        v=2*l*b+2*b*h+2*l*h;
        printf("surface area is %d",SA);
        printf("volume of the cuboid is %d",v);
        break;
    }

    case '4' :
    {
        printf("Enter the value of radius of the sphere");
        scanf("%d",&r);
        SA=4*3.14*r*r;
        v=(4*3.14*r*r*r)/3;
        printf(" surface area is %d",SA);
        printf("volume of the sphere=%d",v);
        break;
    }
    default:
        printf("invalid geometry");


  }
    return 0;
 
}