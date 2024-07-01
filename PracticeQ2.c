#include<stdio.h>
//keep taking numbers from users until user enters multiple of 7.
int main(){
    int x;
    do{
        printf("Enter your number : \n");
        scanf("%d",&x);
        if(x%7!=0){
            printf("%d",x);
        }
        else if(x%7==0) {
            printf("Number is a multiple of 7");
            break;
        }
        else{
            break;
        }
    } while(x>=0);
return 0;
}