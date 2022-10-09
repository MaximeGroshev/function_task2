#include <stdio.h>
unsigned long long int fibonacci(unsigned int n);
int main()
{
    unsigned int n = 0;
    scanf("%u", &n);
    unsigned long long int res = fibonacci(n);
    printf("%llu", res);
    return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int arr[100];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

