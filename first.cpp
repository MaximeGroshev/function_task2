#include <stdio.h>
#include <stdbool.h>
bool is_simple(int n);
int main()
{
    bool simple = false;
    int n = 0;
    scanf("%d", &n);
    simple = is_simple(n);
    printf("%d\n", simple);
}

bool is_simple(int n)
{

    if(n == 0 || n == 1 || n == 2)
    {
        return false;
    }

    if(n > 0)
    {
        for(int i = 2; i < n; i++)
        {

            if( n % i == 0)
            {
                return false;
            }
        }
    }

    if(n < 0)
    {
        return false;
    }
    return true;
}
