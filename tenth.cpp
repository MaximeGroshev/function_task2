#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
char get_a_letter();

int main()
{
    get_a_letter();
}

char get_a_letter()
{
    char c = '0';
    while(!(isalpha(c)))
    {
        scanf("%c", &c);
    }
    return c;
}



