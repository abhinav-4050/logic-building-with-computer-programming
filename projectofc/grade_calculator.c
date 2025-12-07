#include <stdio.h>
#include <string.h>


#define MAX_STUDENTS 50
#define MAX_SUBJECTS 5


const char *subjectNames[MAX_SUBJECTS] = {
    "Physics", 
    "Chemistry", 
    "Maths", 
    "Physical Education", 
    "English"
};


struct Student {
    int id;
    char name[50];
    float marks[MAX_SUBJECTS]; 
    float total;
    float percentage;
    char grade;
};


char calculateGrade(float percentage);
void inputStudentDetails(struct Student *s);
void displayReport(struct Student students[], int count);

int main() {
    struct Student students[MAX_STUDENTS];
    int n, i;

    printf("==========================================\n");
    printf("   STUDENT GRADE CALCULATOR (5 SUBJECTS)  \n");
    printf("==========================================\n\n");

    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    if (n > MAX_STUDENTS || n <= 0) {
        printf("Invalid number. Please enter 1 to %d.\n", MAX_STUDENTS);
        return 1;
    }

    
    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        inputStudentDetails(&students[i]);
    }


    displayReport(students, n);

    return 0;
}


char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else if (percentage >= 40) return 'E';
    else return 'F';
}


void inputStudentDetails(struct Student *s) {
    printf("Enter Student ID: ");
    scanf("%d", &s->id);

    
    while ((getchar()) != '\n'); 

    printf("Enter Student Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = 0; 

    s->total = 0;
    
    
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        printf("Enter Marks for %s (0-100): ", subjectNames[j]);
        scanf("%f", &s->marks[j]);
        
        
        if(s->marks[j] < 0 || s->marks[j] > 100) {
            printf("  Warning: Invalid marks. Setting to 0.\n");
            s->marks[j] = 0;
        }
        s->total += s->marks[j];
    }

    s->percentage = s->total / MAX_SUBJECTS;
    s->grade = calculateGrade(s->percentage);
}


void displayReport(struct Student students[], int count) {
    printf("\n\n");
    printf("====================================================================================================\n");
    printf("                                       FINAL CLASS REPORT                                           \n");
    printf("====================================================================================================\n");
    

    printf("%-5s %-20s %-8s %-8s %-8s %-8s %-8s %-8s %-7s %-5s\n", 
           "ID", "Name", "Phy", "Chem", "Math", "P.Ed", "Eng", "Total", "%", "Grd");
    
    printf("----------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-5d %-20s %-8.1f %-8.1f %-8.1f %-8.1f %-8.1f %-8.1f %-7.1f %-5c\n",
               students[i].id,
               students[i].name,
               students[i].marks[0], // Physics
               students[i].marks[1], // Chemistry
               students[i].marks[2], // Maths
               students[i].marks[3], // Physical Education
               students[i].marks[4], // English
               students[i].total,
               students[i].percentage,
               students[i].grade);
    }
    printf("====================================================================================================\n");
}