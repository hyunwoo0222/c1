#include<stdio.h>
#include<math.h>

double devation(int ary[],int len)
{
    double avg,var,sum=0.0;

    for (int i = 0; i < len; i++)
    {
        sum+=ary[i];
    }
    avg=sum/len;
    for (int i = 0; i < len; i++)
    {
        var+=pow((ary[i]-avg),2);
    }
    var=var/len;
    return sqrt(var);
}

int main(void)
{
    int ary[5];
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ary[i]);
    }

    printf("Stndard Deviation:%.3lf",devation(ary,5));
}