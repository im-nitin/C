// Implicit type conversion
#include<stdio.h>
int main(){

    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    float c = (float)a/b;

    printf("Result: %f\n", c);

}


