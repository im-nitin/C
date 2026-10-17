//Documentation
/*
File: result.c
Description: Program to determine pass or fail status based on subject marks and overall percentage.
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
     int m, p, c, fail =0;

     printf("Enter Marks for Maths: ");
     scanf("%d", &m);
     printf("Enter Marks for Chemistry: ");
     scanf("%d", &c);
     printf("Enter Marks for Physics: ");
     scanf("%d", &p);


     if(m < 33){
        printf("Maths: Fail\n");
        fail = 1;
     } else {
        printf("Maths: Pass\n");
     }

     if(c < 33){
        printf("Chemistry: Fail\n");
        fail = 1;
     } else {
        printf("Chemistry: Pass\n");
     }
     
     if(p < 33){
        printf("Physics: Fail\n");
        fail = 1;
     } else {
        printf("Physics: Pass\n");
     }

     int t = (p+m+c)/3;

     if(t >= 40 && fail == 0){
        printf("Overall Result: Pass\n");
     } else {
        printf("Overall Result: Fail\n");

     }

return 0;
}