#include<stdio.h>
//sum of n natural numbers and printing them in reverse order as well.
int main(){
int i=1;
int n;
printf("Enter your number :");
scanf("%d",&n);
int sum=0;
    do{
        sum=sum+i;
        i=i+1;
    } while(i<=n);
printf("The sum is : %d\n",sum);
for(i=1;i<=n;n=n-1) {
    printf("%d\n",n);
}
return 0;
}