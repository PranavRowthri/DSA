#include <stdio.h>
#include <string.h>
struct Student {
    char name[100];
    int rollNumber;
    int marks[3];
    int totalMarks;
    float averageMarks;
};

// Function prototypes
void readStudentDetails(struct Student* student);
void calculateTotalAndAverageMarks(struct Student* student);
void displayStudentDetails(const struct Student* student);
struct Student findStudentWithHighestMarks(struct Student students[], int n);

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        readStudentDetails(&students[i]);
        calculateTotalAndAverageMarks(&students[i]);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; ++i) {
        printf("Student %d:\n", i + 1);
        displayStudentDetails(&students[i]);
        printf("\n");
}
