#include <stdio.h>

int main()
{

    int i, soma = 0;

    for (i = 1; i <= 100; i += 2)
        soma += i;

    printf("Soma dos números ímpares entre 0 e 100: %d\n\n", soma);
}