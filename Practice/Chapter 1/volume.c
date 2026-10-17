//Documentation
/*
File: volume.c
Description: Program to calculate the volume of a cylinder.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
     float r, h;
     float vol;

     printf("Enter the radius of the cylidner: ");
     scanf("%f", &r);

     printf("Enter the height of the cylinder: ");
     scanf("%f", &h);

     vol = 3.14*r*r*h;

     printf("Volume of the cylinder is: %f\n", vol);
 
return 0;
}