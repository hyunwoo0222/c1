#include<stdio.h>

int main(void)
{
    int numary[5];
    int oddary[5];
    int evenary[5];

    int a=0,b=0;

    printf("plase input five integer:");

    for (int i = 0; i < sizeof(numary)/sizeof(int); i++)
    {

        scanf("%d", &numary[i]);
    }

    for (int i = 0; i < sizeof(numary)/sizeof(int); i++)
    {
        if (numary[i]%2!=0)
        {
            oddary[a]=numary[i];
            a++;
        }
        else
        {
            evenary[b]=numary[i];
            b++;
        }
    }
    

    printf("odd number:");
    for (int i = 0; i < a; i++)
    {
        printf(" %d",oddary[i]);
    }
    printf("\neven number:");
    for (int i = 0; i < b; i++)
    {
        printf(" %d",evenary[i]);
    }
    
    
     
}