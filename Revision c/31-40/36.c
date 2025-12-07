#include <stdio.h>

int main()
{

    int num;
    int index;
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
    printf("Enter element : ");
    scanf("%d", &num);

    printf("Enter index : ");
    scanf("%d", &index);

    if (index > size || index < 0)
    {
        printf("Invalid position.");
    }
    else
    {
        for (int i = size; i >= index; i--)
        {
            a[i] = a[i - 1];
        }
    }
    size++;
    a[index - 1] = num;
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
