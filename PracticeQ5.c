#include<stdio.h>
//WAP to enter price of 3 items and print their final cost with gst.
int main(){
    int prices[3];
    printf("Enter price of first item : ");
    scanf("%d",&prices[0]);
    printf("Enter price of second item : ");
    scanf("%d",&prices[1]);
    printf("Enter price of third item : ");
    scanf("%d",&prices[2]);
    for(int i=0;i<=2;i++){
        int n = prices[i] ;
        int k = n+0.18*n ;
    for(int j=1;j<=3;j++){
    printf("Final value of the item %d = %d\n",j,k);
    }
    }
return 0;
}