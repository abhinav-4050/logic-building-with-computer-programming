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

    return 0;
}
