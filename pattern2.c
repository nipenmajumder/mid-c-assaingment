#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter No: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;

}
