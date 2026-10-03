#include<stdio.h>
int main(){

int choice;
printf("1. area of a triangle\n");
printf("2. area of a rectangle\n");
printf("3. area of circle\n");
printf("4. calculte the simple intrest\n");
printf("Enter your choice::");
scanf("%d",&choice);


if(choice==1){
    int base,height, area;
    printf("enter base:");
    scanf("%d",&base);
    printf("Enter height:");
    scanf("%d",&height);
    area=(base*height)/2;
    printf("the area of a triangle is:%d",area);
}
else if(choice==2){
    int length,breadth,area;
    printf("Enter length::");
    scanf("%d",&length);
    printf("Enter breadth");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("the area of a rectangle is:%d",area);
}
else if(choice==3){
    float radius,area;
    float pi=3.1415;
    printf("Enter radius::");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("the area of a circle is:%f",area);
}
else if(choice==4){
    float p,r,t,si;
    printf("Enter principal::");
    scanf("%f",&p);
    printf("Enter rate::");
    scanf("%f",&r);
    printf("Enter time::");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("the simple intrest is:%f",si);
}
else{
    printf("invalid choice");
}









    return 0;
}
