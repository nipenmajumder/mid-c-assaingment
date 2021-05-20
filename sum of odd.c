#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("Input: ");
    scanf("%d", &n);

    for(i=1; i<=n; i+=2)
    {
        sum += i;
    }

    printf("Sum of odd numbers from 1 to %d:%d", n,sum);

    return 0;
}
