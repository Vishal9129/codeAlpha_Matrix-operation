#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int rows, cols, choice;

    printf("===== MATRIX OPERATIONS =====\n");

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Transpose\n");
    printf("4. Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\nAddition of Matrices:\n");
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    result[i][j] = a[i][j] + b[i][j];
                    printf("%d\t", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("\nSubtraction of Matrices:\n");
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    result[i][j] = a[i][j] - b[i][j];
                    printf("%d\t", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("\nTranspose of Matrix A:\n");
            for (int i = 0; i < cols; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    printf("%d\t", a[j][i]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}