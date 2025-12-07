#include <stdio.h>

int reverse(int arr[], int size);

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

    printf("The reverse array is: ");
    reverse(a, size);

    return 0;
}

int reverse(int arr[], int size)
{
    for (int i = 0; i < size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
