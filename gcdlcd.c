#include <stdio.h>
int main()
{
    int n1, n2, i, gcd ,max;

    printf("first number: ");
    scanf("%d", &n1);
    printf("first number: ");
    scanf("%d", &n2);
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.\n", n1, n2, max);
            break;
        }
        ++max;
    }


    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }



    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
