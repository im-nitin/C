//Documentation
/*
File: sum2.c
Description: Program to calculate the sum of the integers from 1 through 10.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    int i =1, sum=0;

    while(i <= 10){
        sum +=i;

        i++;
    }

    printf("%d", sum);
 
return 0;
}