/* Program to swap two variables using a third variable */

#include<stdio.h>

int main(){
int a = 10;
int b = 20;

int temp;

printf("Original Values: a = %d, b = %d\n", a,b);

temp = a;
a = b;
b = temp;

printf("Swapped Values: a = %d, b = %d\n", a,b);

}