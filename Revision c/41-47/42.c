#include <stdio.h>

int sum(int arr[], int size);

int main()
{

    int summ = 0;
    int size;
    printf("Enter size for array : ");
    scanf("%d", &size);

    int a[size];

    printf("Enter %d elements: \n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    sum(a, size);

    return 0;
}

int sum(int arr[], int size)
{
    int suming = 0;

    for (int i = 0; i < size; i++)
    {
        suming = suming + arr[i];
    }
    printf("\nThe total sum of all elements of array : %d", suming);
}
