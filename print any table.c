 #include <stdio.h>
int main(){
int n;
printf("Enter any number::");
scanf("%d",&n);
printf("\nTable of = %d\n",n);
for(int i=1; i<=10; i++){
    printf("%d X %d = %d\n",n,i,n*i);

}
}
/*int i=1;
while(i<=10){
printf("%d X %d = %d/n",n,i,n*i);/*
