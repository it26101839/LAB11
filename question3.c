#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[100];
    int age;
    float gpa;
} student_t;

student_t getStudent(void)
{
    student_t student;

    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter GPA: ");
    scanf("%f", &student.gpa);

    return student;
}

int main(void)
{
    student_t student;

    student = getStudent();

    printf("Student Name: %s, Age: %d, GPA: %.1f\n",
           student.name, student.age, student.gpa);

    return 0;
}
