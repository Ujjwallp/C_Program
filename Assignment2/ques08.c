#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 0; i * i <= n; i++)
    {
        if (i * i == n)
        {
            printf("Perfect square\n");
            printf("Square root = %d\n", i);
            return 0;
        }
    }

    printf("Not a perfect square\n");

    return 0;
}