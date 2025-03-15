#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, col;

    //Enter number of rows to put into the 2d array
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);

    //Enter number of rows to put into the 2d array
    printf("\nEnter the number of columns: ");
    scanf("%d", &col);

    //declare the array ary and input the rows and columns rows and col into the 2d array
    int ary[rows][col];

    //inputting the numbers you want to store into the 2d array
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &ary[i][j]);
        }
    }

    //printing the 2d array elements
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", ary[i][j]);
        }
        printf("\n");
    }

    return 0;
}
