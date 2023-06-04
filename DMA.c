#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    float avg;
    printf("Enter the value of the n :");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + ptr[i];
    }
    avg = (float)sum / n;
    printf("The average is : %f ", avg);
    free(ptr);
    getch();
    return 0;
}