#include <stdio.h>

int main()
{
    double a, b, c, memoria;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b)
    {
        if (b > c)
        {
        }
        else if (a > c)
        {

            memoria = b;
            b = c;
            c = memoria;
        }
        else
        {
            memoria = a;
            a = c;
            c = b;
            b = memoria;
        }
    }
    else if (a > c)
    {
        memoria = a;
        a = b;
        b = memoria;
    }
    else if (c > b)
    {
        memoria = a;
        a = c;
        c = memoria;
    }
    else
    {
        memoria = a;
        a = b;
        b = c;
        c = memoria;
    }

    if (a >= (b + c))
        printf("Não forma Triângulo\n");
    else if ((pow(a, 2.0)) == (pow(b, 2.0) + pow(c, 2.0)))
        printf("Triângulo Retangulo\n");
    else if (pow(a, 2.0) > (pow(b, 2.0) + pow(c, 2.0)))
        printf("Triângulo Obtusangulo\n");
    else if (pow(a, 2.0) < (pow(b, 2.0) + pow(c, 2.0)))
        printf("Triângulo Acutangulo\n");
    if (a == b && a == c)
        printf("Triângulo Equilatero\n");
    else if (a == b || b == c)
        printf("Triângulo Isósceles\n");

    return 0;
}