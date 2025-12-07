#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The last digit of number is : %d\n", n % 10);
    int temp = n;

    do
    {
        temp /= 10;
    } while (temp >= 10);

    printf("The first digit of number is : %d", temp);

    return 0;
}
