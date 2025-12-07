//WAP to reverse the num

#include <stdio.h>

int main()
{
    int reversed_number;

    int x, y, z;

    int num;
    printf("enter the value of num : ");
    scanf("%d", &num);

    x = (num % 10);
    y = (((num % 100) - 3) / 10);
    z = (num / 100);

    reversed_number = ((x*100)+(y*10)+z);

    printf("The reverse of number is %d", reversed_number);

    return 0;
}


#include<stdio.h>

int main(){

    int n;
    printf("The number is : ");
    scanf("%d", &n);
    int rev = 0;
    while (n != 0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    printf("%d\n", rev);
    
return 0;
}

//WAP to check the number is pallindrome or not

#include<stdio.h>

int main(){

    int n;
   
    printf("The number is : ");
    scanf("%d", &n);
    int temp = n;
    int rev = 0;
    while (n != 0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    printf("%d\n", rev);
    if (rev == temp)
    {
        printf("Pallindrome");
    }
    else{
        printf("Not pallindrome");
    }

return 0;

}

//WAP to check the no of digit in number and also check for armstrong number ability

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int result = 0;
    int temp = n;
    int temp1 = n;

    int count = 0;

    while (n != 0)
    {
        n = n/10;
        count++ ;
    }
    printf("%d\n", count);
    while (temp1 != 0)
    {
        int rem;
        int result;
        rem = temp1%10;
        result = result+pow(rem, count);
        temp1 = temp1/10;

    }
    if (result == temp)
    {
        printf("Armstrong\n");
    }
    else{
        printf("Not armstrong\n");
    }
    
   
}

// WAP to print first and the last number

#include <stdio.h>

int main()
{
    int n = 456;

    int temp = n;

    printf("the first digit of number is : %d\n", n % 10);

    do
    {
        temp /= 10;

    } while (temp >= 10);

    printf("The last digit of number is : %d\n", temp);

    return 0;
}

// WAP to count the number of digit without loop

#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("Enter the value of x : \n");
    scanf("%d", &x);

    int count;

    if (x == 0)
    {
        count = 1;
    }
    else{
        if (x < 0)
        {
            x = -x;
        }
        count = (int)(log10(x))+1;

    }
    printf("Number of digits : %d\n", count);

return 0;

}

// WAP to print the multiplication table of given number

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the value of num : \n");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d  = %d \n",num, i + 1,num*(i+1));
    }

    return 0;
}

// WAP to swap first and ligit of any number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swap;

    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;  // Get the last digit

    digits = (int)log10(num);  // Find total digits - 1
    first = num / pow(10, digits);  // Get the first digit

    // Remove first and last digit, then swap them
    swap = last * pow(10, digits) +
                 (num % (int)pow(10, digits)) / 10 * 10 +
                 first;

    printf("Number after swapping first and last digit: %d\n", swap);

    return 0;
}
