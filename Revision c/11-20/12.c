#include <stdio.h>

int main()
{

    int num;
    printf("Enter any num : ");
    scanf("%d", &num);

    if (num & 1)
    {
        printf("%d is odd", num);
    }
    else
    {
        printf("%d is even");
    }

    return 0;
}
