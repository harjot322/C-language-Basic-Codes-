#include<stdio.h>
//Factorial of a number.(easy way)
int main(){
    int fact=1;
    int n;
    printf("Enter your number : ");
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}