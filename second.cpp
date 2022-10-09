#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a = 0;
    int b = 0;
    int summary = 0;
    scanf("%d %d", &a, &b);
    summary = sum(a, b);
    printf("%d", summary);

}

int sum(int a, int b)
{
    return a + b;
}



