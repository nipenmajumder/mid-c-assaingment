#include<stdio.h>

int main()
{
    int i,j,k,n;

    printf("Enter till which value you want to print: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c",(char)(i+64));
        }
        printf("\n");
    }
}
