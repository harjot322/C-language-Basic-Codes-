#include<stdio.h>
int sumn(int n);
int main(){
    int n;
    printf("Enter your number : \n");
    scanf("%d",&n);
    int x = sumn(n);
    printf("Sum : %d",x);
    return 0;
}
int sumn(int n){
    if (n==0){
        return 0;
    }
    int q = n + sumn(n-1);
    return q;
}