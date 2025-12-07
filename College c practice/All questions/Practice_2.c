/*
NESTED IF STATEMENT


WAP to check that are you eligible for vote or not.
1. First you have to check for citizenship(Eligible only for indians)
2. check age for eligibility(18)    inner
3. else not eligible    inner
4. else not indian citizen
*/

#include <stdio.h>

int main()
{

    int num;
    printf("Enter the number to vote : \n");
    scanf("%d", &num);

    

    if ("Press 1 if you are indian if not press 0", num == 1)
    {

        int age;
    printf("Enter your age : \n");
    scanf("%d", &age);

        if (age >= 18)
        {
            printf("You are eligible to vote");
        }
        else
        {
            printf("You are not eligible to vote");
        }
    }
    else
    {
        printf("You are not indian. so, you can't vote.");
    }

    return 0;
}

/*
Nested if statement :

WAP to check you are indian citizen if yes then enter your age and check eligibility for voting.

*/

#include <stdio.h>

int main()
{

    int num, num1;
    int age;
    printf("Enter the number to vote : \n");
    scanf("%d", &num);

    if ("If you are not indian press 0", num == 0)
    {

        printf("You are not indian. you can't vote\n");
    }
    printf("Enter the number to vote : \n");
    scanf("%d", &num1);

    if ("If you are indian press 1", num1 == 1)
    {

        printf("Enter your age : \n");
        scanf("%d", &age);
    }

    if (age >= 18)
    {
        printf("You are eligible to vote\n");
    }
    if (age < 18)
    {
        printf("You are not eligible to vote\n");
    }

    return 0;
}

//WAP to find the total salary

#include <stdio.h>

int main()
{

    float TS, DA, TA, HRA;
    int BS;

    printf("Enter the value of BS : \n");
    scanf("%d", &BS);

    if (BS < 35000)
    {
        DA = (2.0 / 100.0) * BS;
        TA = (3.0 / 100.0) * BS;
        HRA = (4.0 / 100.0) * BS;
        TS = BS + DA + TA - HRA;
        printf("The value of DA is : %.2f\n", DA);
        printf("The value of TA is : %.2f\n", TA);
        printf("The value of HRA is : %.2f\n", HRA);
        printf("The total salary of the employee is %.2f.\n", BS + DA + TA - HRA);
    }
    if (BS >= 35000 && BS < 80000)
    {
        DA = (3.0 / 100.0) * BS;
        TA = (4.0 / 100.0) * BS;
        HRA = (7.0 / 100.0) * BS;
        TS = BS + DA + TA - HRA;
         printf("The value of DA is : %.2f\n", DA);
        printf("The value of TA is : %.2f\n", TA);
        printf("The value of HRA is : %.2f\n", HRA);
        printf("The total salary of the employee is %.2f.\n", TS);
    }
    if (BS >= 80000)
    {
        DA = (4.0 / 100.0) * BS;
        TA = (6.0 / 100.0) * BS;
        HRA = (9.0 / 100.0) * BS;
        TS = BS + DA + TA - HRA;
         printf("The value of DA is : %.2f\n", DA);
        printf("The value of TA is : %.2f\n", TA);
        printf("The value of HRA is : %.2f\n", HRA);
        printf("The total salary of the employee is %.2f.\n", TS);
    }

    return 0;
}

// WAP to check number is even or odd without using arithmetic operator.

#include <stdio.h>

int main()
{

    int Num;
    printf("enter the number : ");
    scanf("%d", &Num);

    if (Num & 1)
    {
        printf("%d is odd.\n", Num);
    }
    else
    {
        printf("%d is even.\n", Num);
    }

    return 0;
}

// Reversing the number

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;                  // step 1: extract last digit
        reversed = reversed * 10 + remainder;  // step 2: build reversed number
        num = num / 10;                        // step 3: remove last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}

//WAP to print the total marks

#include <stdio.h>

int main()
{

    int mathsmarks = 98;
    int physicsmarks = 99;
    float total;

    total = (30.0 / 100.0) * mathsmarks + (70.0 / 100.0) * physicsmarks;
    printf("%.2f\n", total);
    return 0;
}

// WAP to check given character is vowel or consonant.

#include <stdio.h>
#include<ctype.h>

int main()
{
    
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);


    ch = tolower(ch);

    if (ch >= 'a' && ch <='z'){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            printf("%c is a vowel.", ch);
        }else{

            printf("%c is a consonant.", ch);
        }
        
    }else
    {
        printf("you have not pressed any character please pressed only characters.");
    }

    return 0;
}

//WAP using switch statement to print monday tuesday

#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day number! Please enter between 1 and 7.");
    }

    return 0;
}
