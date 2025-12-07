#include <stdio.h>

int main()
{

    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", 1 + j);
        }
        printf("\n");
    }

    return 0;
}
