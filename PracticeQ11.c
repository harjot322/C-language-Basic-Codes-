#include<stdio.h>
int fibb(int n);
int main(){
    int n;
    printf("Enter your number :\n");
    scanf("%d",&n);
    int x = fibb(n);
    printf("%dth term of fibonacci is : %d\n",n,x);
    return 0;
}
int fibb(int n){
    if (n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int q;
    q = fibb(n-1)+fibb(n-2);
    return q;
}