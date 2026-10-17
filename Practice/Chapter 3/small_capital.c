//Documentation
/*
File: small_capital.c
Description: Program to check whether a letter is uppercase or lowercase.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);


    if(ch >= 65 && ch <= 90){
        printf("Letter is capital");
    } else if(ch >= 97 && ch <= 122) {
        printf("Letter is small");
    } else {
        printf("Invalid Input");
    }
 
return 0;
}