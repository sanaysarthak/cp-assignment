// Program in C to calculate the total and average marks of students using structures
#include <stdio.h>
struct student
{
    int rollNo;
    char name[100];
    int marks;
};
int main()
{
    struct student s1 = {1, "Akash", 75};
    struct student s2 = {2, "Sankalp", 92};
    struct student s3 = {3, "Anshul", 65};
    struct student s4 = {4, "Naman", 82};
    struct student s5= {5, "Yuvraj", 54};
    int totalMarks = s1.marks + s2.marks + s3.marks + s4.marks + s5.marks;
    double avgMarks = totalMarks/5;
    printf("Total marks:  %d\n", totalMarks);
    printf("Average marks:  %.2f", avgMarks);
}