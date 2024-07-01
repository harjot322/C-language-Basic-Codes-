#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100]="haru";
    strcpy(str1,str2);
    int y = strlen(str2);
    printf("%d",y);
    printf("\n%d",strcmp(str1,str2));
    printf("\n%s",strcat(str1,str2));
    return 0;
}