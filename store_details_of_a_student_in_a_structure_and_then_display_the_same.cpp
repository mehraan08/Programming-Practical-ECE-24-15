#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student student;

    printf("Enter student details:\n");
    printf("Name: ");
    fgets(student.name, 50, stdin);
    student.name[strcspn(student.name, "\n")] = 0; // Remove newline character
    printf("Roll No.: ");
    scanf("%d", &student.rollNo);
    printf("Marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll No.: %d\n", student.rollNo);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
