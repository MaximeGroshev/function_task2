#include <stdio.h>
void binary(unsigned int n);

int main()
{
    int number = 0;
    scanf("%d", &number);
    binary(number);
    return 0;
}

void binary(unsigned int n)
{
    int arr[100];
    int i = 0;
    for(i = 0; n != 0; i++)
    {
        if(n % 2 == 1)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
        n = n / 2;
    }

    for(int k = 0; k < i; k++)
    {
        printf("%d", arr[i - 1 - k]);
    }
}
