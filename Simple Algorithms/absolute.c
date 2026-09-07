/* Program to find the absolute value of a number */

#include<stdio.h>

int main(){

    int a;

    printf("Enter the number");
    scanf("%d", &a);

    if(a < 0){
        a = -a;

        printf("The absolute value is: %d", a);
    } else {
        a = a;

        printf("The absolute value is: %d", a);
    }

    
}