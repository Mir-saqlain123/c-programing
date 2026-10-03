#include <stdio.h>

int main()
{
    int choice, n;

    printf("1. Star Triangle\n");
    printf("2. Ulta Star Triangle\n");
    printf("3. Number Triangle\n");
    printf("4. ABCD triangle\n");
    printf("5. ABCD Ulta triangle\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if(choice == 1)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                printf(" *  ");
            }
            printf("\n");
        }
    }

    else if(choice == 2)
    {
        for(int i = n; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
            {
                printf(" *  ");
            }
            printf("\n");
        }
    }

    else if(choice == 3)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                printf("%d  ", j);
            }
            printf("\n");
        }
    }
    else if(choice==4){
        for(int i=1; i<=n; i++){
            int a=1;
            for(int j=1; j<=i;j++ ){
                int d=a+64;
                char ch=(char)d;
                printf("%c   ",ch);
                a++;
            }
            printf("\n");
        }
    }
    else if(choice==5){
        for(int i=1; i<=n; i++){
            int a=1;
            for(int j=1; j<=n+1-i; j++){
                int d=a+64;
                char ch=(char)d;
                printf("%c  ",ch);
                a++;
            }
            printf("\n");
        }
    }

    else
    {
        printf("Invalid choice");
    }

    return 0;
}
...
