#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c; // condition for real and different roots
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.1f and root2 = %.1f", root1, root2);
    }
    else if(discriminant == 0)
    {
        root1 = root2 = -b / (2*a);
        printf("root1 = root2 = %.1f;", root1);
    }
    else {
     
    printf("Roots are imaginary");
    
    }
}