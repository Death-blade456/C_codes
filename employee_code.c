#include <stdio.h>

//Define the structure for employee
struct Employee {
    int id;
    char name[100];
    float salary;
};

int main() {
    struct Employee emp;
    
    //reading employee details
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter the employee name:");
    scanf("%s", emp.name);
    printf("Enter the employee salary:");
    scanf("%f", &emp.salary);
    
    //Displaying employee details
    printf("\nEmloyee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    
    return 0;
}


