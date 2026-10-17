//Documentation
/*
File: 
Description: 
Author: Nitin Kumar (im-nitin)
*/
#include<stdio.h>
 
int main(){
 
    int k, i = k , j=1;

    printf("Enter a number: ");
    scanf("%d",&k);

    while(i<= (k*10)){
        printf("%d x %d = %d \n", k,j,i);

        i+=k;
        j++;

    } 
return 0;
}