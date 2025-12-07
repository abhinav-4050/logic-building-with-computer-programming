#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int result = 0;
    int temp = n;
    int temp1 = n;

    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("Digits: %d\n", count);

    while (temp1 != 0)
    {
        int rem = temp1 % 10;
        result = result + (int)pow(rem, count);
        temp1 = temp1 / 10;
    }

    if (result == temp)
    {
        printf("The number is Armstrong\n");
    }
    else
    {
        printf("The number is not Armstrong\n");
    }

    return 0;
}
