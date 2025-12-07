#include <stdio.h>
#include <math.h>

int main()
{

    int num;
    printf("Enter the num : ");
    scanf("%d", &num);

    int count = 0;

    if (num == 0)
    {
        count = 0;
    }
    else
    {
        if (num < 0)
        {
            num = -num;
        }
        count = (int)(log10(num)) + 1;
    }

    printf("The total number of digits in number is : %d", count);

    return 0;
}
