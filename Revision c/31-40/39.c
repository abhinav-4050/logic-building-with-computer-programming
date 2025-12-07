#include <stdio.h>

int main()
{

    int even = 0;
    int odd = 0;
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
    int EVEN[size];
    int ODD[size];

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            EVEN[even] = a[i];
            even++;
        }
        else
        {
            ODD[odd] = a[i];
            odd++;
        }
    }
    printf("Even numbers : ");
    for (int i = 0; i < even; i++)
    {
        printf("%d ", EVEN[i]);
    }
    printf("\n");
    printf("Odd numbers : ");
    for (int i = 0; i < odd; i++)
    {
        printf("%d ", ODD[i]);
    }

    return 0;
}
