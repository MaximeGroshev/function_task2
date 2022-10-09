#include <stdio.h>
#include <stdbool.h>
bool is_a_number(char c);

int main()
{
    char c = '0';
    scanf("%c", &c);
    is_a_number(c);
}

bool is_a_number(char c)
{
    bool is_a_number = false;
    if( c == '0' || c  == '1' || c  == '2' || c  == '3' || c  == '4' || c  == '5' || c  == '6' || c  == '7' || c  == '8' || c  == '9')
    {
        is_a_number = true;
    }
    return is_a_number;
}

