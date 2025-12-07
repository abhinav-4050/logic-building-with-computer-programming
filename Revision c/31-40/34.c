#include <stdio.h>

int main()
{

    int var = 20;
    int *ptr;
    ptr = &var;

    printf("Value stored in ptr is %d", ptr);
    printf("\nValue pointed to ptr is %d", *ptr);

    return 0;
}
