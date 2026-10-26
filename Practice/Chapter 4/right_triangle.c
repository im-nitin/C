//Documentation
/*
File: c.c
Description: Program to print a right-angled star triangle.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    for (int i = 1; i <= 5; i++) {
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
 
    return 0;
}