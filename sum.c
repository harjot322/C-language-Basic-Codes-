#include <stdio.h>
//sum of 2 numbers entered by the user.
int main() {
    int a;
    int b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    int sum=a+b;
    printf("Sum of both the numbers is %d\n",sum);
    return 0;
}