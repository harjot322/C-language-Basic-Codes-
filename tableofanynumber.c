#include<stdio.h>
//table of any number entered by the user.
int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(int i=1;i<=10;i=i+1){
        int x = a*i;
        printf("\n%d*%d=%d",a,i,x);
    }
    return 0;
}