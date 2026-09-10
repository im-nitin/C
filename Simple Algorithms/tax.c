/* Program to calculate tax and then add it to the final price */

#include<stdio.h>

int main(){

    float price;
    float tax;

    printf("Enter the price of the product:");
    scanf("%f", &price);

    printf("Enter the tax percentage:");
    scanf("%f", &tax);

    float tax_amount = (price * tax) /100;

    float final = price + tax_amount;

    printf("Original Price: %f \n", price);
    printf("Tax Amount: %f \n", tax_amount);
    printf("Final Price: %f \n", final);
    return 0;
}