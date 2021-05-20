//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING
//  STUDENT NUMBER: ********************
//
//
//  The chairs of the Department of Software Engineering and Computer Engineering want 
//  to have a program to follow the internship of their students. The program should 
//  consist of the following data. The data types are given in the parenthesis.
//

#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct {
    int schoolNumber;
    char name[25];
    char surname[25];
    char cellphone[25];
    char email[25];
    char homeAddress[25];
    char city[25];
    char internshipCompName[25];
    char internshipCompAdress[25];
    char internshipCompLocation[25];
    char internshipCompPhone[25];
    char internshipCompEmail[25];
    struct tm internshipStartDate;
    struct tm internshipEndDate;
    int internshipWorkdays;
} studentData;

void printStudentInfo(studentData newStudent) {
    struct tm tm;

    char internshipStartDate[256];
    char internshipEndDate[256];

    strftime(internshipStartDate, sizeof(internshipStartDate), "%A, %d %B %Y", &newStudent.internshipStartDate);
    strftime(internshipEndDate,   sizeof(internshipEndDate),   "%A, %d %B %Y", &newStudent.internshipEndDate);

    printf("\n       Last added record information       \n");
    printf("\n-------------------------------------------\n");

    printf("School number of the student:                      %d\n", newStudent.schoolNumber);
    printf("Name of the student:                               %s\n", newStudent.name);
    printf("surname of the student:                            %s\n", newStudent.surname);
    printf("Phone number of the student:                       %s\n", newStudent.cellphone);
    printf("Email adress of the student:                       %s\n", newStudent.email);
    printf("Home adress of the student:                        %s\n", newStudent.homeAddress);
    printf("City of the student:                               %s\n", newStudent.city);
    printf("Internship company name of the student:            %s\n", newStudent.internshipCompName);
    printf("Internship company address of the student:         %s\n", newStudent.internshipCompAdress);
    printf("Internship company location of the student:        %s\n", newStudent.internshipCompLocation);
    printf("Internship company phone of the student:           %s\n", newStudent.internshipCompPhone);
    printf("Internship company email of the student:           %s\n", newStudent.internshipCompEmail);
    printf("Internship start date of the student (dd/mm/YYYY): %s\n", internshipStartDate);
    printf("Internship end date of the student   (dd/mm/YYYY): %s\n", internshipEndDate);
    printf("Total workdays of the student's internship:        %d\n", newStudent.internshipWorkdays);
}

studentData fillStruct() {
    studentData newStudent;
    struct tm tm;
    char start_date[15];
    char end_date[15];
   
    printf("\n\nSchool number of the student:                   ");
    scanf("%d", &(newStudent.schoolNumber));

    printf("Name of the student:                            ");
    scanf("%s", newStudent.name);

    printf("Surname of the student:                         ");
    scanf("%s", newStudent.surname);

    printf("Cell phone of the student:                      ");
    scanf("%s", newStudent.cellphone);

    printf("Email of the student:                           ");
    scanf("%s", newStudent.email);

    printf("Home adress of the student:                     ");
    scanf("%s", newStudent.homeAddress);

    printf("City of the student:                            ");
    scanf("%s", newStudent.city);

    printf("Internship company name of the student:         ");
    scanf("%s", newStudent.internshipCompName);

    printf("Internship company address of the student:      ");
    scanf("%s", newStudent.internshipCompAdress);

    printf("Internship company location of the student:     ");
    scanf("%s", newStudent.internshipCompLocation);

    printf("Internship company phone of the student:        ");
    scanf("%s", newStudent.internshipCompPhone);

    printf("Internship company email of the student:        ");
    scanf("%s", newStudent.internshipCompEmail);

    printf("Internship start date of the student:           ");
    scanf("%s", start_date);
    strptime(start_date, "%d/%m/%y", &newStudent.internshipStartDate);
 
    printf("Internship end date of the student:             ");
    scanf("%s", end_date);
    strptime(end_date, "%d/%m/%y", &newStudent.internshipEndDate);

    printf("Total workdays of the student's internship:     ");
    scanf("%d", &(newStudent.internshipWorkdays));

    return newStudent;
}

int saveToFile(studentData newStudent) {
    FILE * fp;
    int i;

    fp = fopen("students.txt", "a");
    i = 0;

    char internshipStartDate[256];
    char internshipEndDate[256];

    strftime(internshipStartDate, sizeof(internshipStartDate), "%A, %d %B %Y", &newStudent.internshipStartDate);
    strftime(internshipEndDate,   sizeof(internshipEndDate),   "%A, %d %B %Y", &newStudent.internshipEndDate);


    fprintf(fp, "\n         Last added record information          \n"                               );
    fprintf(fp, "\n------------------------------------------------\n"                               );
    fprintf(fp, "School number of the student:               %d\n", newStudent.schoolNumber          );
    fprintf(fp, "Name of the student:                        %s\n", newStudent.name                  );
    fprintf(fp, "surname of the student:                     %s\n", newStudent.surname               );
    fprintf(fp, "Phone number of the student:                %s\n", newStudent.cellphone             );
    fprintf(fp, "Email adress of the student:                %s\n", newStudent.email                 );
    fprintf(fp, "Home adress of the student:                 %s\n", newStudent.homeAddress           );
    fprintf(fp, "City of the student:                        %s\n", newStudent.city                  );
    fprintf(fp, "Internship company name of the student:     %s\n", newStudent.internshipCompName    );
    fprintf(fp, "Internship company address of the student:  %s\n", newStudent.internshipCompAdress  );
    fprintf(fp, "Internship company location of the student: %s\n", newStudent.internshipCompLocation);
    fprintf(fp, "Internship company phone of the student:    %s\n", newStudent.internshipCompPhone   );
    fprintf(fp, "Internship company email of the student:    %s\n", newStudent.internshipCompEmail   );
    fprintf(fp, "Internship start date of the student:       %s\n", internshipStartDate              );
    fprintf(fp, "Internship end date of the student:         %s\n", internshipEndDate                );
    fprintf(fp, "Internship total workdays of the student:   %d\n", newStudent.internshipWorkdays    );
    fprintf(fp, "\n------------------------------------------------\n\n\n");

    fclose (fp);
    return 0;
}

int main(void) {
    char selection[5];

    while(1) {
        printf("Enter (q) for quit, (i) for insert: ");
        scanf("%s", selection);
                
        if (strcmp(selection, "q") == 0 || strcmp(selection, "Q") == 0) {
            return 0;
        }
        
        else if (strcmp(selection, "i") == 0 || strcmp(selection, "I") == 0) {
            {
              //Fetch data into struct
              studentData newStudent = fillStruct();
            
              // Print out the data of struct.
              printStudentInfo(newStudent);
            
              // Save data of struct in txt file.
              saveToFile(newStudent);
            }
            printf("\n\n Student saved into a file named student.txt\n");
        }
    }
    return 0;
}
