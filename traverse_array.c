#include <stdio.h>
#include <stdlib.h>

int main()

{

    int i;
    int num[5];

    printf("\nEnter 5 numbers to store in the array: ");
    for(i = 0; i < 5; i++)
    {
        printf("\nNumber %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("\nThe numbers stored in the array are: ");
    for(i = 0; i < 5; i++)
    {
        printf("\n%d", num[i]);
    }

    //even numbers
    printf("\nThe even numbers are: ");
    for(i = 0; i < 5; i++)
    {
        if(num[i] % 2 == 0)
        {
            printf("\n%d", num[i]);
        }
    }

    printf("\nThe odd numbers are: ");
    for(i = 0; i < 5; i++)
    {
        if(num[i] % 2 != 0)
        {
            printf("\n%d", num[i]);
        }
    }

    return 0;
}
