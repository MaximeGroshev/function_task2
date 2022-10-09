#include <stdio.h>
unsigned long long int nonacci(unsigned int n);
int main()
{
    unsigned int n = 0;
    scanf("%u", &n);
    unsigned long long int res = nonacci(n);
    printf("%llu", res);
    return 0;
}

unsigned long long int nonacci(unsigned int n)
{
    unsigned long long int arr[100];
    for(int i = 0; i < 8; i++)
    {
        arr[i] = 0;
    }
    arr[8] = 1;

    for(int i = 9; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4] + arr[i - 5] + arr[i - 6] + arr[i - 7] + arr[i - 8] + arr[i - 9];
    }
    return arr[n];
}
