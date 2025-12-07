//WAP to print star pattern first increasing then decreasing

#include <stdio.h>

int main() {
    int rows;
    printf("Enter the value of rows: ");
    scanf("%d", &rows);

    // Increasing triangle
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Decreasing triangle
    for (int k = 0; k < rows - 1; ++k) {
        for (int l = 0; l < rows - k - 1; l++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


//WAP to print the shape of triangle without 90 degree angle

#include<stdio.h>

int main(){

    

    int rows;
    printf("Enter the value of dope :\n");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

return 0;

}

//WAP to print star pattern in form of right agled triangle in reverse form

#include<stdio.h>

int main(){

    

    int rows;
    printf("Enter the value of dope :\n");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) 
        {
            printf("*");
        }
        printf("\n");
    }
    

return 0;

}

//WAP to print the star pattern in right angle triangle form

#include<stdio.h>

int main(){

    int rows;
    printf("Enter the value of dope :\n");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

return 0;

}
