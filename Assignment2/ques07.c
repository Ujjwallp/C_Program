#include <stdio.h>

int main()
{
    int num, prev;

    printf("Enter first number: ");
    scanf("%d", &prev);

    while (1)
    {
        printf("Enter next number: ");
        scanf("%d", &num);

        if (num == -1)
        break;

        if (num < prev)
        {
            printf("Numbers are not in ascending order.\n");
            return 0;
        }

        prev = num;
    }

    printf("Numbers are in ascending order.\n");

    return 0;
}