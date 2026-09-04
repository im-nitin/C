/* Program to calculate age */

#include <stdio.h>

int main(){

    int age;

    printf("Enter your birth year:");
    scanf("%d", &age);

    int agenow = 2026 - age;

    printf("Your age is: %d %s", agenow, "years \n");

    if (agenow >= 18){
        printf("You can vote");
    } else {
        printf("You cannot vote");
    }
}
