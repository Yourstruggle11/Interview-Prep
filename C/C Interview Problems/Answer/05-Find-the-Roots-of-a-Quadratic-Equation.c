// TO solve this we should know what exactly Quadractic-Equation is!
/*
*In algebra, a quadratic equationis any equation that can be rearranged in standard form as
*  'ax^2+bx+c=0'
*  where x represents an unknown, and a, b, and c represent known numbers, where a ≠ 0. If a = 0, then the equation is linear, not quadratic, as there is no 'ax^2' term.

*The term 'b^2 - 4ac' is known as the discriminant of a quadratic equation. It tells the nature of the roots.

*If the discriminant is greater than 0, the roots are real and different.
*If the discriminant is equal to 0, the roots are real and equal.
*If the discriminant is less than 0, the roots are complex and different.
*/

#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    for (int i = 1; i < 4; i++)
    {
        switch (i)
        {
        case 1:
                printf("Enter coefficients a\n");
                scanf("%lf", &a);
            break;
        case 2:
                printf("Enter coefficients b\n");
                scanf("%lf", &b);
            break;
        case 3:
                printf("Enter coefficients c\n");
                scanf("%lf", &c);
            break;
        
        default:
            break;
        }
    }

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

