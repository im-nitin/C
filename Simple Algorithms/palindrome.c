#include<stdio.h>

int main(){
    int a, b, c, d;

    printf("Enter the three digit number: ");
    scanf("%d", &a);

    b = a%10+a;
    c = a/100;

    printf("%d\n", b);
    printf("%d\n", c);


}