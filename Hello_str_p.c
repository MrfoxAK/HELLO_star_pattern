#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no.of rows: ");
    scanf("%d", &n);
    int mid = n / 2;

    // for H
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (n % 2 == 0)
            {
                if (j == 1 || i == mid || j == n)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (j == 1 || i == mid + 1 || j == n)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    // for E
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (n % 2 == 0)
            {
                if (j == 1 || i == mid || i == n || i == 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (j == 1 || i == mid + 1 || i == n || i == 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    // for L
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==n || j==1)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    // for L
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==n || j==1)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    printf("\n");
    printf("\n");

    // for O
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==1 || i==n || j==1 || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}