//Documentation
/*
File: table.c
Description: Program to print the multiplication table of a number.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    int i = 1, k;

    printf("Enter a number: ");
    if (scanf("%d", &k) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    while (i <= 10) {
        printf("%d x %d = %d\n", k, i, k * i);
        i++;
    } 

    return 0;
}