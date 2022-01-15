//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING
//  STUDENT NUMBER: ********************
//

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Sinus value calculator. \n\n");
    
    double angle, radian;
    double PI = 3.14159265358979323846;
    
    printf("Enter the value of angle: ");
    scanf("%lf", &angle);
    
    radian = angle*(PI / 180);

    printf("           Angle you entered: %f \n", angle);
    printf("Angle you entered in radians: %f \n", radian);

    printf("  Sinus value of given angle: %f \n", sin(radian));
    return 0;
}
