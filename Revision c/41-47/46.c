#include <stdio.h>

int main()
{

    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    int columns;
    printf("Enter columns: ");
    scanf("%d", &columns);
    int sum = 0;

    int array[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int arr[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j = i; j++)
        {
            sum = sum + array[i][j];
        }
    }
    printf("\n");
    printf("The sum of diagonal elements : %d", sum);

    return 0;
}
