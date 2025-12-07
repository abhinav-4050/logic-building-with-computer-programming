//WAP to find the sum of two numbers

#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter the value of a and b : \n");
    scanf("%d, %d", &a, &b);

    printf("The value of sum of %d and %d is %d.", a, b, a + b);

    return 0;
}

//WAP to find the size of type of data

#include<stdio.h>

int main(){

    int a;
    float b;
    double c;
    char d;

    printf("The size of int a is : %zu bytes", sizeof(int));

return 0;

}

//WAP to swap values without third integers

#include<stdio.h>

int main(){

    int x = 10;
    int y = 5;

    x = x - y;
    y = y + x;

    printf("The swapped value of x and y is %d and %d.", x, y);


return 0;

}

//WAP to find the compund interest

#include <stdio.h>

int main()
{

    int p, t;
    float r, A, CI;

    printf("Enter the principal amount : \n");
    scanf("%d", &p);

    printf("Enter the Interest rate : \n");
    scanf("%f", &r);

    printf("Enter the rate of time : \n");
    scanf("%d", &t);
    printf("\n");
    printf("\n");
    A = p * r * t;
    printf("The value of Total amount is %f.", A);
    printf("\n");
    printf("\n");
    CI = A - p;
    printf("\n");
    printf("The value of coumpund interest is %f.", CI);

    return 0;
}

// WAP to find the num is odd or even

#include <stdio.h>

int main()
{

    int num;
    printf("Enter the value of num : \n");
    scanf("%d", &num);

    if (num % 2 == 1)
    {
        printf("The number you enter is odd");
    }
    else
    {
        printf("The number is even");
    }

    return 0;
}

// WAP to make a calculator

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero!\n");
                return 1; // Exit program
            }
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}

// WAP to get the result of C language and data science.

#include <stdio.h>

int main()
{

    int C_LANGUAGE;
    int DATA_SCIENCE;
    float TOTAL_MARKS;

    printf("Enter the value of marks of C_LANGUAGE : \n");
    scanf("%d", &C_LANGUAGE);

    printf("Enter the value of marks of DATA_SCIENCE : \n");
    scanf("%D", &DATA_SCIENCE);

    TOTAL_MARKS = (3.0 / 10.0) * C_LANGUAGE + (7.0 / 10.0) * DATA_SCIENCE;

    printf("The overall result of both subject is %f.", TOTAL_MARKS);

    return 0;
}

//WAP to calculate the circumference of a circle.

#include <stdio.h>

int main()
{

    int radii;
    printf("Enter the value of radii : \n");
    scanf("%d", &radii);

    printf("The circumference of the circle is %.2f", 2 * 3.14 * radii);

    return 0;
}

//WAP to calculate the area of a square

#include <stdio.h>

int main()
{

    int side;
    printf("Enter the value of side : \n");
    scanf("%d", &side);

    printf("The area of the square is %d", side * side);

    return 0;
}

// WAP to print the ASCII value of given character

#include <stdio.h>

int main()
{

    char a;
    printf("Enter the value of character : \n");
    scanf("%c", &a);

    printf("The ASCII value of given character is %d", a);

    return 0;
}

//WAP to check today is what day

#include <stdio.h>

int main()
{

    int num;
    printf("Enter the value of num : \n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Today is Monday");
    }
    else if (num == 2)
    {
        printf("Today is Tuesday");
    }
    else if (num == 3)
    {
        printf("Today is Wednesday");
    }
    else if (num == 4)
    {
        printf("Today is Thursday");
    }
    else if (num == 5)
    {
        printf("Today is Friday");
    }
    else if (num == 6)
    {
        printf("Today is Saturday");
    }
    else
    {
        printf("Today is Sunday, Sunday is the holiday.");
    }

    return 0;
}

//WAP to check eligibility for vote by using nested if

#include <stdio.h>

int main()
{

    int age;
    int num;
    printf("Enter the value of num : \n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Enter the value of age : \n");
        scanf("%d", &age);

        if (age >= 18)
        {
            printf("You are eligible to vote and can vote anyone.");
        }
        else
        {
            printf("You are not eligible to vote.");
        }
    }
    else
    {
        printf("You are not indian, you can't give vote.");
    }

    return 0;
}

//WAP to check eligibility for vote by using Ladder if

#include <stdio.h>

int main()
{

    int num;
    int num1;
    int age;

    printf("Enter the value of num : \n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("You are indian, you can vote.\n");
        printf("\n");
        printf("Enter your age : \n");
        scanf("%d", &age);
    }
    if (age >= 18)
    {
        printf("You can give vote.\n");
    }
    if (age < 18)
    {
        printf("You can't vote.\n");
    }
    if (num == 0)
    {
        printf("You are not indian, you can't vote.\n");
    }

    return 0;
}

//WAP to check the given character is vowel or consonant

#include <stdio.h>

int main()
{

    char Dope;
    printf("Enter the value of Dope : \n");
    scanf("%c", &Dope);

    if (Dope == 'a' || Dope == 'e' || Dope == 'i' || Dope == 'o' || Dope == 'u')
    {
        printf("The character you choose is vowel\n");
    }
    else if (Dope == 'A' || Dope == 'E' || Dope == 'I' || Dope == 'O' || Dope == 'U')
    {
        printf("The character you choose is vowel\n");
    }
    else
    {
        printf("The character you choose is consonant\n");
    }

    return 0;
}

//WAP to calculate total salary of employee.

#include <stdio.h>

int main()
{

    int ts, bs, hra, da, ta;

    printf("Enter the base salary of employee\n");
    scanf("%d", &bs);

    if (bs < 35000)
    {
        da = (bs * 2) / 100;
        ta = (bs * 3) / 100;
        hra = (bs * 4) / 100;
        ts = bs + da + ta - hra;

        printf("The da is : 2%%\n", da);
        printf("The da is : 3%%\n", ta);
        printf("The da is : 4%%\n", hra);
        printf("The total salary of employee is %d", ts);
    }
    else if (bs >= 35000 && bs < 80000)
    {
        da = (bs * 3) / 100;
        ta = (bs * 4) / 100;
        hra = (bs * 7) / 100;
        ts = bs + da + ta - hra;

        printf("The da is : 3%%\n", da);
        printf("The da is : 4%%\n", ta);
        printf("The da is : 7%%\n", hra);
        printf("The total salary of employee is %d", ts);
    }
    else if (bs >= 80000)
    {
        da = (bs * 4) / 100;
        ta = (bs * 6) / 100;
        hra = (bs * 9) / 100;
        ts = bs + da + ta - hra;

        printf("The da is : 4%%\n", da);
        printf("The da is : 6%%\n", ta);
        printf("The da is : 9%%\n", hra);
        printf("The total salary of employee is %d", ts);
    }

    return 0;
}

//WAP for Sunday to saturday using switch statements

#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}

//WAP to seperate individually three digit number

#include <stdio.h>

int main()
{

    int num, num1, num2;

    int Dope;
    printf("enter the value of dope : \n");
    scanf("%d", &Dope);

    num = Dope % 10;
    num1 = ((Dope % 100) - num) / 10;
    num2 = ((Dope % 1000) - (num1 * 10) - (num)) / 100;

    printf("The individual value of 3 digit number is : %d %d %d", num2, num1, num);
    

    return 0;
}

//WAP to check divisibility with negative number

#include<stdio.h>

int main(){

int a = 456;
int num;
num = 456%(-2);
printf("The value of num is : %d\n", num);
return 0;

}


