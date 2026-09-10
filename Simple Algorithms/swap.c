/* Program to swap two variables using a third variable */

#include<stdio.h>

int main(){
int a;
int b;

printf("Enter the value of a:");
scanf("%d", &a);

printf("Enter the value of b:");
scanf("%d", &b);

int temp;

printf("Original Values: a = %d, b = %d\n", a,b);

temp = a;
a = b;
b = temp;

printf("Swapped Values: a = %d, b = %d\n", a,b);
return 0;

}