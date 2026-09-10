/* 
Program to input and find average of three numbers.
*/
#include<stdio.h>

int main(){
    
    int a , b, c;

    printf("Enter the first number:", a);
    scanf("%d", &a);

    printf("Enter the second number:", b);
    scanf("%d", &b);

    printf("Enter the third number:", c);
    scanf("%d", &c);

    int d = (a+b+c)/3;

    printf("Average: %d", d);
    return 0;

}