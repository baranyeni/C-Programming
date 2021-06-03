//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING
//  STUDENT NUMBER: ********************
//
//       EDITED AT: 18 Oct 19.56


#include <stdio.h>
#include <math.h>

int main() {
    printf("It's Baran's first C assignment! \n\n");

    double a,b,c,x1,x2,rp,ip,r1,r2,D;
    int isReal;

    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);

    D = (b * b) - (4 * a * c);

    printf("\nDelta is: %.3lf \n", D);

    // True path in flowchart
    if (D >= 0) {
        printf("Delta higher than or equal to 0 \n\n");

        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);

        isReal = 1;
    }

    // false path in flowchart
    else {
        printf("\nThere are no real roots!\n\nImaginary roots are;");
        ip = -b / (2 * a);
        rp = sqrt(-D)/(2*a);

        isReal = 0;

        printf("\n x1  %.4lf + %.4f j", ip, rp);
        printf("\n x2  %.4lf - %.4f j", ip, rp);
    }

    if (isReal == 1) {
        if (r1 == r2) {
            printf("One real root calculated \nIt's %.3lf", r1);
        }
        else {
            printf("\nReal root 1 : %.3lf", r1);
            printf("\nReal root 2 : %.3lf", r2);
        }
    }
 }
