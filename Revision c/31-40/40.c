#include <stdio.h>

int main()
{

    int size;
    printf("Enter size for array : ");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    int max = a[0];
    int min = a[0];

    for (int i = 0; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }

    printf("\nMax : %d\n", max);
    printf("Min : %d", min);

    return 0;
}
