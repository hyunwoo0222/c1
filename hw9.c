#include<stdio.h>
#include<string.h>

int main(void)
{
    const int diff = 'a'-'A';
    char str[100];
    printf("Input>");
    fgets(str,sizeof(str),stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]-=diff;
        }
        else if (str[i]>='A' && str[i]<='Z')
        {
            str[i]+=diff;
        }
    }
    printf("Output>");
    printf("%s",str);
    
}