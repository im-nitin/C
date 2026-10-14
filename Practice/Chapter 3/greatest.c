//Documentation
/*
File: greatest.c       
Description: PRogram to find the greatest number out of 4 numbers
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    int greatest, a, b, c, d;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Enter fourth number: ");
    scanf("%d", &d);
    
    if(a>b && a>c && a>d) greatest = a;
    else if(b>a && b>c && b>d) greatest = b;
    else if(c>a && c>b && c>d) greatest = c;
    else if(d>a && d>b && d>c) greatest = d;
    else printf("Invalid Input");

    printf("Greatest Number: %d", greatest);

return 0;
}