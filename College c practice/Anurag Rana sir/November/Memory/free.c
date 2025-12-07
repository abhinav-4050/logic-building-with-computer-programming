#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr; // pointer for dynamic memory

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically using malloc
    ptr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation failed
    if (ptr == NULL)
    {
        printf("Memory not allocated!\n");
        return 1;
    }

    // Taking input in dynamically allocated array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Printing the array
    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);
    printf("\n\nMemory freed successfully.\n");
    printf("\n");

    return 0;
}
