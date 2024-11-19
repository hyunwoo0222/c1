#include<stdio.h>

int main(void)
{
    const int diff = 'a'-'A';
    int ch;
    printf("Input>");

    while (1)
    {
        ch=getchar();
        if (ch==EOF)
        {
            break;
        }
        if (ch>96 && ch<123)
        {
            ch-=diff;
        }
        else if (ch>64 && ch<91)
        {
            ch+=diff;
        }
        putchar(ch);
    }
    
}