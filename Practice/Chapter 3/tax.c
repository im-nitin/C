//Documentation
/*
File: tax.c
Description: Program to calculate income tax based on government income-tax slabs.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
     int income, tax =0;

     printf("Enter your income: ");
     scanf("%d", &income);

     if(income<=250000){
        tax = tax;
     } else if(income>250000 && income<=500000){
        tax = 0.05*(income-250000);
     } else if(income> 500000 && income<=1000000){
        tax = 0.05 * (500000 - 250000) + 0.2 *(income-500000);
     } else {
        tax = 0.05 * (500000 - 250000) + 0.2 *(1000000-500000) + 0.3*(income- 1000000);
     }

     printf("Tax: %d", tax);
 
return 0;
}