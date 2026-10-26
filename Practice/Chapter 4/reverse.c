//Documentation
/*
File: reverse.c
Description: Program to reverse the digits of a number.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
    int n, rem, rev =0;

    printf("Enter a number: ");
    scanf("%d", &n);


    while(n>0){

        rem = n%10;
        rev = rev*10+rem; 
        n = n/10;
    }
 
    printf("Reverse: %d", rev);

return 0;
}