#include<stdio.h>
//write two functions, one to say hello and other to say goodbye.
void hello();
void goodbye();
int main(){
    hello();
    goodbye();
    return 0;
}
void hello() {
    printf("Hello!\n");
}
void goodbye() {
    printf("Goodbye!\n");
}