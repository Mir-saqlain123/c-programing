 #include<stdio.h>
int main(){
int l,b,a,p;
printf("Enter length::");
scanf("%d",&l);
printf("Enter breadth::");
scanf("%d",&b);
a=l*b;
p=2*(l+b);
printf("The area of a rectangle is=%d\n",a);
printf("The perimeter of a rectangle is=%d\n",p);
if(a>p){
    printf("area is greater than perimeter");
}
else{
...
