#include <stdio.h>
#include <string.h>

#define WILD_COUNT 5
#define DOMESTIC_COUNT 5
#define TOTAL_COUNT (WILD_COUNT + DOMESTIC_COUNT)

int main() {
    char wildAnimals[WILD_COUNT][50];
    char domesticAnimals[DOMESTIC_COUNT][50];
    char allAnimals[TOTAL_COUNT][50];

    // wild animals
    printf("Enter 5 wild animals:\n");
    for (int i = 0; i < WILD_COUNT; i++) {
        printf("Wild animal %d: ", i + 1);
        fgets(wildAnimals[i], sizeof(wildAnimals[i]), stdin);
        wildAnimals[i][strcspn(wildAnimals[i], "\n")] = 0;
    }

    // domestic animals
    printf("\nEnter 5 domestic animals:\n");
    for (int i = 0; i < DOMESTIC_COUNT; i++) {
        printf("Domestic animal %d: ", i + 1);
        fgets(domesticAnimals[i], sizeof(domesticAnimals[i]), stdin);
        domesticAnimals[i][strcspn(domesticAnimals[i], "\n")] = 0;
    }

    for (int i = 0; i < WILD_COUNT; i++) {
        strcpy(allAnimals[i], wildAnimals[i]);
    }

    for (int i = 0; i < DOMESTIC_COUNT; i++) {
        strcpy(allAnimals[WILD_COUNT + i], domesticAnimals[i]);
    }

    printf("\nMerged list of animals:\n");
    for (int i = 0; i < TOTAL_COUNT; i++) {
        printf("%d. %s\n", i + 1, allAnimals[i]);
    }

    return 0;
}

