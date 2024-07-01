#include<stdio.h>
/*Write a function to say namaste if user is an Indian
& bonjour if user is French.*/
void Indian();
void French();
int main() {
    int n;
    printf("Enter Your Nationality : \n");
    printf("(Press 1 for Indian.\nPress 2 for French.)");
    scanf("%d",&n);
    if(n==1){
        Indian();
    }
    else if(n==2){
        French();
    }
    else{
        printf("Enter valid choice");
    }
    return 0;
}
void Indian() {
    printf("Namaste!");
}
void French(){
    printf("Bonjour!");
}