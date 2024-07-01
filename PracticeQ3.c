#include<stdio.h>
//Print all numbers from 1 to 10 except 6.
int main(){
    for(int i=1;i<=10;i++) {
        if(i==6) { 
            continue;
        }
        else{
            printf("%d\n",i);
        }
    }
return 0;
}