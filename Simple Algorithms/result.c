#include<stdio.h>

int main(){
    int marks;

    printf("Enter your marks:");
    scanf("%d", &marks);

    if(marks >= 90){
        printf("Excellent");
    }else if(marks >= 80){
        printf("Very Good");
    }else if(marks >= 70){
        printf("Good");
    }else if(marks >= 60){
        printf("Average");
    } else if(marks <= 33){
        printf("Failed :(");
    }else {
        printf("Pass");
    }

return 0;

}