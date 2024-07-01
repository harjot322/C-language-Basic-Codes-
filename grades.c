#include<stdio.h>
//grades of a student by inputing marks from user.
int main() {
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if ((0<=marks) && (marks<30)) {
        printf("Your grade is C");
    }
    else if ((30<=marks) && (marks<70)) {
        printf("Your grade is B");
    }
    else if ((70<=marks) && (marks<90)) {
        printf("Your grade is A");
    }
    else if ((90<=marks) && (marks<= 100)) {
        printf("Your grade is A+");
    }
    else{
        printf("Enter valid marks");
    }
}