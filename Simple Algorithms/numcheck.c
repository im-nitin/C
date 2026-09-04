/* Program to check if a number is +ve, -ve or 0 */

#include<stdio.h>

int main(){
    int a;

    printf("Enter a number:");
    scanf("%d", &a);

    if(a > 0){
        printf("The number is positive");
    } else if(a < 0){
        printf("The number is negative");
    } else {
        printf("The number is zero");
    }
}