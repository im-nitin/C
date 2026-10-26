//Documentation
/*
File: reverse_table.c
Description: Program to print the multiplication table of 10 in reverse order.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    int i , j;

    i = 10;
    j = 10;

    while(i>=1){

        printf("%d x %d = %d\n", j, i, j*i);
        i--;

    }
 
return 0;
}