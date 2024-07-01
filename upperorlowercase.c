#include<stdio.h>
//to check wether the entered character is uppercase or lowercase.
int main() {
    char ch;
    printf("Enter your character : ");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z') {
        printf("Lowercase character.\n");
    }
    else if (ch>='A' && ch<='Z') {
        printf("Uppercase Character");
    }
    else {
        printf("Enter valid character.");
    }
}