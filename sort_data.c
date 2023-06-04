#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter number of array element : \n ");
    scanf("%d", &n);
    int i, a[n] , j  , temp;
    printf("Enter the array : \n ");

    for ( i = 0; i < n; i++)
    {
         scanf("%d" ,&a[i]);
    }

    for ( i = 0; i < n ; i++){
        for ( j = i+1; j < n ; j++){
           if (a[i] > a [j] ){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
           }
        } 
    }
    printf("the sort data is : \n");
    for ( i = 0; i < n; i++)
    {
         printf("%d" ,a[i]);
    }
    
    

    getch();
    return 0;
}