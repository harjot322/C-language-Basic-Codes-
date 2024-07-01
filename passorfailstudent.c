#include<stdio.h>
//checking if student has passed or failed the examination.
int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if(marks>30) {
        printf("Passed\n");
    }
    else {
        printf("Failed\n");
    }
return 0;
}