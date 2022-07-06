#include <stdio.h>

int main()
{
    int n, x = 0;

    scanf(" %d", &n);

    while (x < 500)
    {
        if (x % n == 0)
            printf("%d\n", x);

        x++;
    }

    return 0;
}