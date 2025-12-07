#include <stdio.h>

int gcd(int a, int b);

int lcm(int a, int b);

int main()
{

    int num1, num2;
    printf("Enter the both number : ");
    scanf("%d %d", &num1, &num2);

    int GCD = gcd(num1, num2);
    int LCM = lcm(num1, num2);
    printf("GCD : %d\n", GCD);
    printf("LCM : %d", LCM);

    return 0;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
