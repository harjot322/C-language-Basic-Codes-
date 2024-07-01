#include<stdio.h>
//keep taking numbers from user until user enters an odd number.
int main(){
    int x;
    do{
        printf("Enter your number : \n");
        scanf("%d",&x);
        if(x%2==0){
            printf("%d",x);
        }
        else{
            printf("Entered number is odd. \n");
            break;
        } 
    } while (x>0);
return 0;
}