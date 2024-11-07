#include <stdio.h>
#include <string.h>

#define MAX_NAME 25
#define MAX_DEPARTMENT 20
#define MAX_EMAIL 50

// defining structure 
struct employee {
    char name[MAX_NAME];
    int id;
    char department[MAX_DEPARTMENT];
    float salary;
    char email[MAX_EMAIL];
};

int main() {
    // Declare a variable of this structure type
    struct employee emp;

    // Initialize the structure variable
    strcpy(emp.name, "John Doe");
    emp.id = 12345;
    strcpy(emp.department, "Human Resources");
    emp.salary = 55000.50;
    strcpy(emp.email, "john.doe@company.com");

    // Print the values of the fields
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
