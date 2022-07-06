#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a % b == 3 || b % a == 3)
        printf("São Multiplos\n");
    else
        printf("Nao são Multiplos\n");

    return 0;
}