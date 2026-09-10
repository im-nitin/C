/* Program to calculate simple interest */

#include<stdio.h>

int main(){
    
    float p, r, t;

    printf("Enter the principal amount:");
    scanf("%f", &p);

    printf("Enter the rate of interest:");
    scanf("%f", &r);

    printf("Enter the time period: (years)");
    scanf("%f", &t);

    float c = p*r*t;
    float d = c/100;

    printf("Simple Interest: %f", d);
    return 0;
}