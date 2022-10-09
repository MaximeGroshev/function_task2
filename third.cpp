#include <stdio.h>
int sum_of_numbers(unsigned int n);

int main()
{
    unsigned int n = 0;
    int sum = 0;
    scanf("%d", &n);
    sum = sum_of_numbers(n);
    printf("%u", sum);
}

int sum_of_numbers(unsigned int n)
{
    int d = 0;
    int k = 0;
    int sum = 0;
    for(int i = 0; n != 0; i++)
    {
        d = n % 10;
        n = n / 10;
        sum = sum + d;
    }
    return sum;
}
