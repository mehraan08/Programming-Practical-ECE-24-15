#include <stdio.h>

struct Student {
    int rollNo;
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\nTopper of the class:\n");
    printf("Roll No.: %d\n", students[topperIndex].rollNo);
    printf("Marks: %.2f\n", students[topperIndex].marks);

    return 0;
}
