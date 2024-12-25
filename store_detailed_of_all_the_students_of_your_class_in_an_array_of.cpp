#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        printf("Roll No.: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); // Consume newline character
    }

    printf("\nStudent Details:\n");
    printf("------------------------------------\n");
    printf("| %-20s | %-10s | %-10s |\n", "Name", "Roll No.", "Marks");
    printf("------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| %-20s | %-10d | %-10.2f |\n", students[i].name, students[i].rollNo, students[i].marks);
    }
    printf("------------------------------------\n");

    return 0;
}
