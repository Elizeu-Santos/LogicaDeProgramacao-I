#include <stdio.h>

int main()
{
    double salario, reajuste, percentual;

    scanf("%lf", &salario);

    if (salario >= 0 && salario <= 900.00)
        percentual = 0.20;
    else if (salario >= 400.01 && salario <= 900.00)
        percentual = 0.20;
    else if (salario >= 900.01 && salario <= 1300.00)
        percentual = 0.10;
    else if (salario >= 1300.01 && salario <= 1800.00)
        percentual = 0.05;

    reajuste = salario;
    salario = salario + salario * percentual;
    reajuste = salario - reajuste;
    percentual = percentual * 100;

    printf("Novo salario: %.2lf\n", salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", percentual);

    return 0;
}