//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING
//  STUDENT NUMBER: ********************
//


#include <stdio.h>

int main()
{
    printf("Rectangle area calculator. \n\n");
    
    double a, b, c, d;
    double areaOfBigRect, areaOfSmlRect, rimArea;
    

    printf("Enter the value of a length: ");
    scanf("%lf", &a);
    printf("Enter the value of b length: ");
    scanf("%lf", &b);
    printf("Enter the value of c length: ");
    scanf("%lf", &c);
    printf("Enter the value of d length: ");
    scanf("%lf", &d);

    printf("\nThe dimensions are; \n");
    printf("a: %f, b: %f, c: %f, d: %f \n\n", a, b, c, d);
    
    areaOfBigRect = a * b;
    areaOfSmlRect = c * d;
    rimArea = areaOfBigRect - areaOfSmlRect;
    
    printf("Area of small rectangle is: %f \n", areaOfSmlRect);
    printf("  Area of big rectangle is: %f \n", areaOfBigRect);

    printf("The rim area is: %f cm^2", rimArea);

    return 0;
}
