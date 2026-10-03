 #include<stdio.h>
int main(){

int choice;
printf("choice::1. Ap 1,3,5,7...upto n terms\n");
printf("choice::2. AP 100,97,94,91..up to n terms\n");
printf("choice::3. GP 100,50,25..up to n terms\n");
printf("choice::4. GP 3, 12, 48...up to n terms\n\n");

printf("Enter choice::");
scanf("%d",&choice);
if(choice==1){
    int n;
    printf("Enter a number::");
    scanf("%d",&n);
    int a=1;
    for(int i=1; i<=n; i++){
    printf("%d ",a);
    a=a+2;
    }
}
else if(choice==2){
    int n;
    printf("Enter a number::");
    scanf("%d",&n);
    int a=100;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        a=a-3;
    }
}
else if(choice==3){
    int n;
    printf("Enter a number::");
    scanf("%d",&n);
    float a=100;
    for(int i=1; i<=n; i++){
        printf("%f \n",a);
        a=a/2;
    }
}
else if(choice==4){
    int n;
    printf("Enter a number::");
    scanf("%d",&n);
    int a=3;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        a=a*4;
    }
}
else{
    printf("invalid choice");
}












    return 0;
}
