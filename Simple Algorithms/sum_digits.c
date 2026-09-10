#include<stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("Enter a number:");
    scanf("%d", &a);

    b = a % 10;
    c = a / 10;

    int d = b + c;

    printf("Sum of the digits is: %d", d);
    return 0;
}