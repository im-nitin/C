//Documentation
/*
File: divisible.c
Description: Program to check whether a number is divisible by 97.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);

    if(a%97 == 0){
        printf("Number is divisible by 97");
    } else {
        printf("Number is not divisible by 97");
    }
 
 
return 0;
}