#include <stdio.h>

int main()
{
    int n;

    /*
     * Input a number from user
     */
    scanf("%d", &n);

    while(n>=1)
    {
        printf("%d ", n);
        n--;
    }

    return 0;
}
