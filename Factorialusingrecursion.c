#include<stdio.h>
//factorial of n using recursion.
int fact(int n);
int main(){
    int n;
    printf("Factorial of given number is %d\n",fact(3));
return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    int k = fact(n-1);
    int j = k*n;
    return j;
}