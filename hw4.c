#include<stdio.h>
#include<math.h>
int main(void)
{
    int a;
    int prime=1;
    printf("Please enter a number:");
    scanf("%d",&a);
    if (a==2 || a==3)
    {
        printf("It is a prime number.");
    }
    else
    {
        for (int i=2; i < sqrt(a); i++)
        {
            if (a%i==0)
            {
                prime=0;
                break;
            }
        }
        if (prime==0)
        {
            printf("It is not a prime number.");
        }
        else
        {
            printf("It is a prime number.");
        }
    }
}