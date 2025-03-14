#include <stdio.h>
#include <stdlib.h>

int main() {
    float marks[3][4];  // 2D array to store marks: [subject][assessment]
    float sum_subjects[3] = // Array to hold the sums for each subject
    float avg_subjects[3]; // Array to hold the averages for each subject
    float overall_avg;//To hold the averages of all subjects
    int i, j;

    char *subject_names[] = {"Physics", "Chemistry", "Math"};
    char *assessment_names[] = {"Assignments", "Course Work", "Midterms", "End Term"};

    // Input marks for each subject and assessment
    for (i = 0; i < 3; i++) {
        printf("Enter marks for %s (", subject_names[i]);
        for (j = 0; j < 4; j++) {
            printf("%s ", assessment_names[j]);
            if (j < 3) {
                printf(", ");
            }
        }
        printf("):\n");

        for (j = 0; j < 4; j++) {
            printf("Mark for %s: ", assessment_names[j]);
            scanf("%f", &marks[i][j]);
            sum_subjects[i] += marks[i][j]; // Calculate sum for each subject as we go
        }
        printf("\n");  // Add a newline for better readability
    }

    // Calculate averages for each subject
    for (i = 0; i < 3; i++) {
        avg_subjects[i] = sum_subjects[i] / 4.0;
    }

    // Calculate overall average
    overall_avg = (avg_subjects[0] + avg_subjects[1] + avg_subjects[2]) / 3.0;

    // Display results
    printf("\nAverage Marks:\n");
    for (i = 0; i < 3; i++) {
        printf("%s: %.2f\n", subject_names[i], avg_subjects[i]);
    }
    printf("Overall Average: %.2f\n", overall_avg);

    return 0;
}
