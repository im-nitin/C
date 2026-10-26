//Documentation
/*
File: while_even.c
Description: Program to print the even numbers from 1 through 10.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    int i =1;

    while(i <= 10){

        if(i%2 == 0){
           printf("%d ", i); 
        }
        i++;
    }

 
return 0;
}