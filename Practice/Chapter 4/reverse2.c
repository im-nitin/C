//Documentation
/*
File: reverse2.c
Description: Program to print the digits of a number in reverse order.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    int n, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n>0){
        rem = n%10;
        
        printf("%d", rem);
        
        n = n/10;
    }
 
return 0;
}