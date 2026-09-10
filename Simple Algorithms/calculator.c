#include<stdio.h>

int main(){
    int r;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    int area = 3.14*r*r;

    printf("Area: %d", area, " Sq. Units");
    return 0;
}