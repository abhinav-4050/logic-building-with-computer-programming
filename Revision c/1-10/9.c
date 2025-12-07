#include <stdio.h>

int main()
{

    int ch;
    printf("Enter the character : ");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U')
    {
        printf("The character you entered is vowel.");
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The character you entered is vowel.");
    }
    else
    {
        printf("The character you entered is consonant.");
    }

    return 0;
}
