#include <stdio.h>
#include <math.h>

int main()
{

    int num, first, last, digits, swap;
    printf("Enter any number : ");
    scanf("%d", &num);

    last = num % 10;

    digits = (int)(log10(num));

    first = num / pow(10, digits);

    swap = last * pow(10, digits) + (num % (int)pow(10, digits)) / 10 * 10 + first;

    printf("Number after swapping : %d", swap);

    return 0;
}
