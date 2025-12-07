#include <stdio.h>

int main()
{

    int mathematics;
    int data_science;
    float total_marks;
    printf("Enter the marks of mathematics : ");
    scanf("%d", &mathematics);
    printf("Enter the marks of data science : ");
    scanf("%d", &data_science);
    total_marks = (70.0 / 100.0) * mathematics + (30.0 / 100.0) * data_science;
    printf("The total marks of the student is : %.2f", total_marks);

    return 0;
}
