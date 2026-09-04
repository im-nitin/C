/* Program to convert number of days into
hours
minutes
seconds
*/

#include<stdio.h>

int main(){

    int days;

    printf("Enter the number of days;");
    scanf("%d", &days);

    int hours = days * 24;
    int min = hours * 60;
    int sec = min * 60;

    printf("Days: %d \n", days);
    printf("Hours: %d \n", hours);
    printf("Minutes: %d \n", min);          
    printf("Seconds: %d \n", sec);
}   