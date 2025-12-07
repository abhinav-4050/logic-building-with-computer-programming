#include <stdio.h>

int main()
{

    int num, pos = -1;
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

    for (int i = 0; i < size; i++)
    {
        if (a[i] == num)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Element notfound !!");
        return 0;
    }
    for (int i = pos; i <= size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    size--;
    printf("Array after deletion : ");

    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
