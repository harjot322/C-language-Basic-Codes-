#include<stdio.h>
//create 2 strings firstname and lastname to store details from user and print all the characters using loop.
int main(){
    char firstname[]="HARJOT";
    char lastname[]="MAKKAR";
    for(int i=0;i<=5;i++){
        printf("%s\t",&firstname[i]);
    }
    for(int j=0;j<=5;j++){
        printf("%s\t",&lastname[j]);
    }
    return 0;
}