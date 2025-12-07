#include <stdio.h>

int main()
{

    float circumference;
    int radii;
    printf("Enter the radii : ");
    scanf("%d", &radii);
    circumference = 2 * 3.14 * radii;
    printf("The circumference is : %.2f", circumference);

    return 0;
}
