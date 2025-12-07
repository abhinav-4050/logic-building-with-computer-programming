#include <stdio.h>

int main()
{

    int num;

    printf("Press 1 if you are indian or press 0.\n");
    printf("Enter the no. 1 or 0 : ");
    scanf("%d", &num);

    if (num != 0 && num != 1)
    {
        do
        {
            printf("Please enter the number between 1 and zero : ");
            scanf("%d", &num);
        } while (num != 0 && num != 1);
    }

    if (num == 1)
    {
        int age;
        printf("Enter your age : ");
        scanf("%d", &age);

        if (age < 18)
        {
            printf("Not eligible for vote");
        }
        else
        {
            printf("Eligible for vote");
        }
    }
    if (num == 0)
    {
        printf("You are not indian. you can't vote.");
    }

    return 0;
}
