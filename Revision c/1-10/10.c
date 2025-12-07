#include <stdio.h>

int main()
{

    int num;
    do
    {
        printf("Enter any number between 1 and 7 : ");
        scanf("%d", &num);
    } while (num < 1 || num > 7);

    switch (num)
    {
    case 1:
        printf("You choose!! Monday");
        break;
    case 2:
        printf("You choose!! Tuesday");
        break;
    case 3:
        printf("You choose!! Wednesday");
        break;
    case 4:
        printf("You choose!! Thursday");
        break;
    case 5:
        printf("You choose!! Friday");
        break;
    case 6:
        printf("You choose!! Saturday");
        break;
    case 7:
        printf("You choose!! Sunday");
        break;
    }

    return 0;
}
