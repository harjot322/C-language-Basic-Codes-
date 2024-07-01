#include<stdio.h>
//printing numbers from 0 to n.
int main(){
    int i=0;
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
}