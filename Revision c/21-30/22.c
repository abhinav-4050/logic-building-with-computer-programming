// #include <stdio.h>

// int main()
// {
//     int rows;
//     printf("Enter the number of rows : ");
//     scanf("%d", &rows);

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int k = 0; k < rows - 1; ++k)
    {
        for (int l = 0; l < rows - k - 1; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
