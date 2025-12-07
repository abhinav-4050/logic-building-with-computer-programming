#include <stdio.h>

int main()
{
    int n;
    printf("Number : ");
    scanf("%d", &n);

    int temp = n;
    int rev = 0;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if (temp == rev)
    {
        printf("The number is palindrome.");
    }
    else
    {
        printf("The number is not palindrome.");
    }

    return 0;
}
