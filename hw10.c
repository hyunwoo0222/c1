#include<stdio.h>

typedef struct cities
{
    char name[20];
    char country[20];
    int population;
}cities;


int main(void)
{
    cities arr[3];
    printf("Input three cities:");
    for (int i = 0; i < 3; i++)
    {
        printf("Name>");
        scanf("%s",arr[i].name);
        printf("Country>");
        scanf("%s",arr[i].country);
        printf("Population>");
        scanf("%d",&arr[i].population);
    }
    printf("Printing the three citise:\n");
    for (int i = 0; i < 3; i++)
    {
       printf("%d. %s in %s with a population of %d people\n",i,arr[i].name,arr[i].country,arr[i].population);
    }
}