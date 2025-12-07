//WAP to print the value of i

#include <stdio.h>

int main()
{

    int day;
    printf("Enter the value of n : \n");
    scanf("%d", &day);


    printf("");


    for (int i = 0; i < day; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("i = %d\n", i);
    }

    return 0;
}

//WAP using the for loop

#include <stdio.h>

int main()
{

    int dope;
    printf("Enter the value of dope :\n");
    scanf("%d", &dope);

    for (int i = 1; i <= dope; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

// WAP to print first n natural number.

#include <stdio.h>

int main()
{

    int dope;
    printf("Enter the value of dope :\n");
    scanf("%d", &dope);
    int i = 1;

    while (i != dope)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

//WAP to print the continuous pattern of alphabet

#include<stdio.h>

int main(){
    char c = 'A';
    int rows;
    printf("Enter the value of dope :\n");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", c++);
        }
        printf("\n");
    }
    

return 0;

}

//WAP to print the continuous pattern of integer

#include<stdio.h>

int main(){
    int a = 1;
    int rows;
    printf("Enter the value of dope :\n");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", a++);
        }
        printf("\n");
    }
    

return 0;

}

//WAP to print the number pattern in different form

#include<stdio.h>

int main(){

    int rows;
    printf("Enter the value of dope :\n");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", i+1);
        }
        printf("\n");
    }
    

return 0;

}

// WAP to print the number in increaing order row wise

#include<stdio.h>

int main(){

    int rows;
    printf("Enter the value of dope :\n");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j+1);
        }
        printf("\n");
    }
    

return 0;

}