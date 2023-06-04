#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 100
struct student
{
    char name[N], add[N], gender[N];
};

int main()
{
    int i, j;

    struct student obj[5], temp;
    for (i = 0; i < 5; i++)
    {
        printf(" %d.Enter the name , address , gender \n",i+1);
        scanf("%s%s%s", obj[i].name, obj[i].add, obj[i].gender);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(obj[i].name, obj[j].name) > 0)
            {
                temp = obj[i];
                obj[i] = obj[j];
                obj[j] = temp;
            }
        }
    }
    printf("Sorted list based on names:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s, Address: %s, Gender: %s\n", obj[i].name, obj[i].add, obj[i].gender);
    }

    getch();
    return 0;
}