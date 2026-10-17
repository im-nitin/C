//Documentation
/*
File: switch_calc.c
Description: Calculator program using switch-case statements for basic arithmetic operations.
Author: Nitin Kumar (im-nitin)
*/
#include <stdio.h>

int main() {

    int a, b, result;
    char op;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); 

    // printf("You entered operator: %c\n", op);

    switch (op){

    case '+':
        result = a+b;
        printf("Result: %d\n", result);
        break;
    case '-':
        result = a-b;
        printf("Result: %d\n", result);
        break;

    case '*':
        result = a*b;
        printf("Result: %d\n", result);
        break;

    case '/':
        if(b != 0){
            result = a/b;
            printf("Result: %d\n", result);
        } else {
            printf("Zero Division Error\n");
        }
        break;
    default:
        printf("Invalid Operaion\n");
        break;
    }
    
    return 0;
}
