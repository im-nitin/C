/* 
Program to get input and divide two numbers.
*/

#include<stdio.h>

int main(){

    int a;
    int b;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    int c = a / b;

    printf("Result: %d:", c);
}