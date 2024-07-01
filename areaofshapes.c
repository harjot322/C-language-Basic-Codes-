#include<stdio.h>
//area of square, rectangle, circle using different functions.
int arsq(int s);
int arre(int l,int b);
int arci(int r);
int main(){
    int x;
    int s;
    int l;
    int b;
    float r;
    printf("Which shape's area would you like to find?\n(press 1 for square\npress 2 for rectangle\npress 3 for circle.)");
    scanf("%d",&x);
    if(x==1){
        printf("Enter the side of square : ");
        scanf("%d",&s);
        int p = arsq(s);
        printf("Area of the square = %d\n",p); 
    }
    else if(x==2){
        printf("Enter length of rectangle : ");
        scanf("%d",&l);
        printf("Enter breadth of rectangle : ");
        scanf("%d",&b);
        int q = arre(l,b);
        printf("Area of rectangle = %d\n",q); 
    }
    else if (x==3){
        printf("Enter the radius of the circle : ");
        scanf("%f",&r);
        int y = arci(r);
        printf("Area of circle = %f\n",y*3.14);
    }
    else{
        printf("Enter valid choice.");
    }
return 0;
}
int arsq(s) {
    return s*s;
}
int arre(l,b) {
    return l*b;
}
int arci(r) {
    return r*r;
}