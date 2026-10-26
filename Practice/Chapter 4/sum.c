//Documentation: 
/*
File: sum.c
Description: Program to calculate the sum of the digits of a number.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    int n, sum =0, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n>0){
        r = n%10;
        sum = sum+r;

        n = n/10;
    }

    printf("Sum: %d", sum);
 
return 0;
}