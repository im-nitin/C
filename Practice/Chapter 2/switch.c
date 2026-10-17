//Documentation
/*
File: switch.c
Description: Program to demonstrate switch-case control flow.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){

    int a;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("Input was 1\n");
            break;
        case 2:
            printf("Input was 2\n");
            break;
        case 3:
            printf("Input was 3\n");
            break;
        case 4:
            printf("Input was 4\n");
            break;
        default:
            printf("No Matching Output\n");
            break;
    }

    
 
return 0;
}