#include <stdio.h>

int main()
{

    int position;
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
    printf("\nEnter any position : ");
    scanf("%d", position);

    int index = position - 1;

    if (position < size || position > 0)
    {
        printf("Element : %d", a[index]);
    }
    else
    {
        printf("Invalid Position.");
    }

    return 0;
}
