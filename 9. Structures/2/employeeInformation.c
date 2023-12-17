// Program in C to store employee information (name, ID, salary) and then display it using structures.
#include <stdio.h>
struct employee
{
    int empId;
    char name[100];
    int salary;
};
int main()
{
    struct employee e1 = {12, "Shashank Kashyap", 600000};
    struct employee e2 = {34, "Vatsal Kumar", 450000};
    struct employee e3 = {38, "Siddhant Tripathi", 1200000};
    struct employee e4 = {56, "Neel Pandey", 780000};
    struct employee e5 = {61, "Karan Singh", 1150000};
    printf("Employee Structure:-\n");
    printf("Id: %d\t    Name:  %s\t  Salary:  Rs. %d\t\n", e1.empId, e1.name, e1.salary);
    printf("Id: %d\t    Name:  %s\t\t  Salary:  Rs. %d\t\n", e2.empId, e2.name, e2.salary);
    printf("Id: %d\t    Name:  %s\t  Salary:  Rs. %d\t\n", e3.empId, e3.name, e3.salary);
    printf("Id: %d\t    Name:  %s\t\t  Salary:  Rs. %d\t\n", e4.empId, e4.name, e4.salary);
    printf("Id: %d\t    Name:  %s\t\t  Salary:  Rs. %d\t\n", e5.empId, e5.name, e5.salary);
    return 0;
}