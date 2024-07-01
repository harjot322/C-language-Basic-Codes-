#include<stdio.h>
//Sum of 2 numbers using parameters in a function.
int sum(int x, int y);
int main(){
    int x,y;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter second number : ");
    scanf("%d",&y); 
    int s = sum(x,y);
    printf("Required sum is : %d\n",s);
}
int sum(int x,int y) {
    return x+y;
}