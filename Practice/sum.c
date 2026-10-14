#include<stdio.h>
 
int main(){
 
     int n, h, t, o, sum;

     printf("Enter a 3 Digit Number: ");
     scanf("%d", &n);

     h = n/100; // Extracts first digit
     t = (n/10) % 10; //Extracts second digit
     o = n%10;//Extracts third digit

     sum = h+t+o;
     
     printf("Sum: %d", sum);
 
return 0;
}