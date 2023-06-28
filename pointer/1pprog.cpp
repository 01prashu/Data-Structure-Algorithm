#include <stdio.h>
#include <string.h>
int main()
{
    // char arr[100];
    // char city[20];
    // int n;
    // printf("%d" ,n);
    // printf("Enter Your City Count:" );
    // scanf("%d", n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%s" , arr[i]);
    // }
    // for(int i=0;i<n;i++)
    // {
    //     printf(arr[i]);
    // }
    // int n;
    // printf("Enter your total city");
    // scanf("%d" , n);

    
    int n=5 ,i;
    // printf("Enter total city count");
    // scanf("%d" , n);
    char arr[5][10];
    printf("Enter Your City here \n");
    for( i=0;i<5;i++)
    {
        
        scanf("%s " ,arr[i]);

    }
    char search[10]="pune";
    for(int j=0;j<5;j++)
    {
        if(arr[i]==search)
        {
            printf("City is present \n");
            break;
        }
        else
        {
            printf("city is not present \n");
            break;
        }
    }
    return 0;
}