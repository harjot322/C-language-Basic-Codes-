#include<stdio.h>
//Celcius to Farhenite using functions.
int conv(int c);
int main(){
    int c;
    printf("Enter the temprature in degree Celcius : ");
    scanf("%d",&c);
    printf("Temprature in degree Farenhite = %d\n",conv(c));
return 0;
}
int conv(int c){
    int f = (c*9/5)+32;
    return f;
}