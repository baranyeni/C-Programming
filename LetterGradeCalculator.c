//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING
//  STUDENT NUMBER: ********************
//

#include <stdio.h>


int printResult(double grade, int success) {
    char name[20], surname[20], number[20];
    
    printf("Enter the name of the student   :");
    scanf("%s", name);
    
    printf("Enter the surname of the student:");
    scanf("%s", surname);
    
    printf("Enter the number of the student:");
    scanf("%s", number);   

    if (success == 1) {
        printf("\n\n\n %s %s with the number of %s is succesfull! \n", &name, &surname, &number);
    }
    
    else if (success == 0) {
        printf("\n\n\n %s %s with the number of %s is unsuccesfull! \n", &name, &surname, &number);
    }
}

int main()
{
    int grade;

    printf("Enter the grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Invalid range, it should be in between 0-100");
    }

    else if (grade <= 100 && grade >= 90) {
        printResult(grade, 1);
        printf("Final Grade is         : AA \n");
        printf("Numerical equivalent is: 4.0 \n");
    }
    
    else if (grade < 90 && grade >= 80) {
        printResult(grade, 1);
        printf("Final Grade is         : BA \n");
        printf("Numerical equivalent is: 3.5 \n");
    }
    
    else if (grade < 80 && grade >= 70) {
        printResult(grade, 1);
        printf("Final Grade is         : BB \n");
        printf("Numerical equivalent is: 3.0 \n");
    }
    
    else if (grade < 70 && grade >= 60) {
        printResult(grade, 1);
        printf("Final Grade is         : BC \n");
        printf("Numerical equivalent is: 2.5 \n");
    }
    
    else if (grade < 60 && grade >= 50) {
        printResult(grade, 1);
        printf("Final Grade is         : CC \n");
        printf("Numerical equivalent is: 2.0 \n");
    }
    
    else if (grade < 50 && grade >= 40) {
        printResult(grade, 1);
        printf("Final Grade is         : DC \n");
        printf("Numerical equivalent is: 1.5 \n");
    }
    
    else if (grade < 40 && grade >= 30) {
        printResult(grade, 1);
        printf("Final Grade is: DD \n");
        printf("Numerical equivalent is: 1.0 \n");
    }
    
    else if (grade < 30) {
        printResult(grade, 0);
        printf("Final Grade is         : F \n");
        printf("Numerical equivalent is: 0 \n");

    }
    return 0;
}
