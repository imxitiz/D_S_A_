#include<stdio.h>
#include<conio.h>


int main(){

    int a[3][3] , b[3][3] , i , j , k , m[3][3];
    printf("enter the first matrix : ");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
             scanf("%d" ,&a[i][j]);
        }
    }
    printf("enter the second matrix : ");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
             scanf("%d" ,&b[i][j]);
        }
    }

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            m[i][j] = 0;
            for ( k = 0; k < 3; k++){
                 m[i][j] =  m[i][j] + a[i][k] * b[k][j];
            }
            
        }
    }  
    printf("the multiplied matrix is : \n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
             printf("%d " ,m[i][j]);
        }
        printf("\n");
    }  
    getch();
    return 0;
}