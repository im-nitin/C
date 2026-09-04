/* 
Program to get intput and subtract two numbers.
*/

#include<stdio.h>

int main(){
    int b;
    int a;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    int c = a - b;

    printf("Result: %d:", c);
    return 0;   
}
