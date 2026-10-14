//Documentation
/*
File: small_capital.c
Description: Program to find wether a letter is small or capital
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    int n = (int)ch;

    if(n >= 65 && n <= 90){
        printf("Letter is capital");
    } else if(n >= 97 && n <= 122) {
        printf("Letter is small");
    } else {
        printf("Invalid Input");
    }
 
return 0;
}