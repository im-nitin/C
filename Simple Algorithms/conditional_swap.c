/* Conditional Swap & Sum Program */

#include<stdio.h>

int main(){
int x = 10, y = 16, z =3;

if(x>y){
    x=y;
} else {
    y=x;
}
 if(z>y){
    z=y;
 } else {
    y =z;
 }

 int sum = x+y+z;

    printf("x=%d, y=%d, z=%d \n", x, y, z);
    printf("Sum: %d", sum);
}