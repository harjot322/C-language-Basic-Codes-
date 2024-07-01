#include<stdio.h>
//Value of nth term in fibonacci series.
int fib(int n);
int main(){
    int n;
    printf("Enter nth term of fibonacci series : ");
    scanf("%d",&n);
    printf("The value of %dth term of fibonacci is %d\n",n,fib(n));
return 0;
}
int fib(int n) {
        if(n==0) {
        return 0;
    }
    if(n==1){
        return 1; }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN= fibNm1 + fibNm2;
    return fibN;
}
