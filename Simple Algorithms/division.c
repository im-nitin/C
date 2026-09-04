/* 
Program to get input and divide two numbers.
*/

#include<stdio.h>

int main(){

    float a;
    float b;

    printf("Enter the first number:");
    scanf("%f", &a);

    printf("Enter the second number:");
    scanf("%f", &b);

    float c = a / b;

    printf("Result: %f:", c);
    return 0;
}