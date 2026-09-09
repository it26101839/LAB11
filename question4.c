#include <stdio.h>

#define SIZE 5

typedef struct
{
    char name[50];
    int id;
    float salary;
} employee_t;

void printHighestSalary(employee_t employees[], int size)
{
    int highestIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (employees[i].salary > employees[highestIndex].salary)
        {
            highestIndex = i;
        }
    }

    printf("\nHighest Salary: %s, ID: %d, Salary: %.2f\n",
           employees[highestIndex].name,
           employees[highestIndex].id,
           employees[highestIndex].salary);
}

int main(void)
{
    employee_t employees[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", employees[i].name);

        printf("Enter ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
    }

    printHighestSalary(employees, SIZE);

    return 0;
}
