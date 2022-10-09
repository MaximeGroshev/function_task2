#include <stdio.h>
unsigned long long int factorial (unsigned int num);

int main()
{
    unsigned int num = 0;
    scanf ("%u", &num);
    unsigned long long int res = factorial (num);
    printf("%llu\n", res);

    return 0;
}

unsigned long long int factorial (unsigned int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

