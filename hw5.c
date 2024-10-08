#include<stdio.h>
#include<math.h>
int i=0;
int b;

int binary(int a)
{
    if (a==1)
    {
        b+=a*pow(10,i);
        return printf("%d",b);
    }
    else
    {
        b+=(a%2)*pow(10,i);
        i++;
        return binary(a/2);
    }
}

int main(void)
{
    int a;
    printf("Please enter the number: ");
    scanf("%d",&a);
    binary(a);
}