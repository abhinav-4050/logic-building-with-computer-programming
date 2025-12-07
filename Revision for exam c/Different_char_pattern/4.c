#include <stdio.h>

int main()
{

    int rows;
    printf("Enter the rows : ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int s = 0; s < rows - i - 1; s++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%c", 'A' + j);
        printf("\n");
    }

    return 0;
}
