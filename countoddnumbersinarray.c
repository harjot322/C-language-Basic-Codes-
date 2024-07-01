#include<stdio.h>
//To calculate number of odd numbers in an array.
int main(){
    int j=0;
    int arr[]={20,324,534,323,2,323,33,232,3434,244,4342,32,111,3131,1223,1,07654};
    for(int i=0;i<=16;i++){
    if(arr[i]%2!=0){
        j=j+1;
    }
    }
printf("%d",j);
return 0;
}