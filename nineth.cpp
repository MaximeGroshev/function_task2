#include <stdio.h>
#include <ctype.h>
char leveling(char c);

int main()
{
    char c = 'a';
    scanf("%c", &c);
    c = leveling(c);
    printf("%c\n",  c);
    return 0;
}

char leveling(char c)
{
    c = tolower(c);
    return c;
}
