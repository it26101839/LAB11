#include <stdio.h>

#define SIZE 2

typedef struct
{
    char name[50];
    int id;
    int score;
} student_t;

int main(void)
{
    student_t students[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", students[i].name);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        printf("Enter score: ");
        scanf("%d", &students[i].score);
    }

    printf("\nStudent Details:\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%s (%d), Score: %d\n",
               students[i].name,
               students[i].id,
               students[i].score);
    }

    return 0;
}  

