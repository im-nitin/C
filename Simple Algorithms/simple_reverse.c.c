//Simple program to reverse a two-digit number

#include<stdio.h>

int main(){
     int a, b, c;

     printf("Enter a number:");
     scanf("%d", &a);

    b = a % 10;
    c = a / 10;

    //  printf("b: %d", b);
    //  printf("c: %d", c);
    printf("Reversed number: %d%d", b, c);
     return 0;
     
}