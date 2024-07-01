#include<stdio.h>
//square of a number using pow function.
#include<math.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int s = pow(a,2);
    printf("%d",s);
return 0;
}