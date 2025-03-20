#include <stdio.h>
#include <stdlib.h>

int main()
{
    float physics[4], chemistry[4], math[4];
    float sum_physics = 0, sum_chemistry = 0, sum_math = 0;
    float avg_physics, avg_chemistry, avg_math, overall_avg;
    int i;

    //Taking the inputs for Physics
    printf("Enter mark for physics (Assignments, Coure Work, Midterms, End Term): ");
    for (i = 0; i < 4; i++){

         do {
            printf("Enter mark for physics %d: ", i + 1);
            scanf("%f", &physics[i]);
            if (physics[i] < 0 || physics[i] > 100) {
                printf("Invalid input! Marks for physics should be between 0 and 100. Please try again.\n");
            }
        } while (physics[i] < 0 || physics[i] > 100);
        sum_physics += physics[i];
    }

    //Taking the input for Chemistry
     printf("Enter mark for chemistry (Assignments, Coure Work, Midterms, End Term): ");
    for (i = 0; i < 4; i++){

        do {
            printf("Enter mark for chemistry %d: ", i + 1);
            scanf("%f", &chemistry[i]);
            if (chemistry[i] < 0 || chemistry[i] > 100) {
                printf("Invalid input! Marks for chemistry should be between 0 and 100. Please try again.\n");
            }
        } while (chemistry[i] < 0 || chemistry[i] > 100);
        sum_chemistry += chemistry[i];
    }

    //Taking the input for Math
    printf("Enter mark for math (Assignments, Coure Work, Midterms, End Term): ");
    for (i = 0; i < 4; i++){

        do {
            printf("Enter mark for chemistry %d: ", i + 1);
            scanf("%f", &math[i]);
            if (math[i] < 0 || math[i] > 100) {
                printf("Invalid input! Marks for math should be between 0 and 100. Please try again.\n");
            }
        } while (math[i] < 0 || math[i] > 100);
        sum_math += math[i];
    }

    //calculating averages
    avg_physics = sum_physics /4;
    avg_chemistry = sum_chemistry /4;
    avg_math = sum_math /4;
    overall_avg = (avg_physics + avg_chemistry + avg_math) /3;

    //Display results
    printf("\nAverage Marks:\n");
    printf("\nphysics: %.2f\n", avg_physics);
    printf("\nchemistry: %.2f\n", avg_chemistry);
    printf("\nmath: %.2f\n", avg_math);
    printf("Overall Average: %.2f\n", overall_avg);

    return 0;

}
