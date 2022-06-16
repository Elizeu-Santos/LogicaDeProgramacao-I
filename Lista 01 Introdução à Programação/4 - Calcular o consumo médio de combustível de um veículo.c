#include <stdio.h>

int main(void)
{
    float distancia,
        tempo,
        velocidade,
        litros_usados;

    // Entrada de dados
    printf("TEMPO GASTO = ");
    scanf("%f", &tempo);
    printf("VELOCIDADE  = ");
    scanf("%f", &velocidade);

    // Processamento de dados
    distancia = tempo * velocidade;
    litros_usados = distancia / 12;

    // Saída de dados
    system("clear");
    printf("VELOCIDADE MEDIA = %10.2f Km/h \n", velocidade);
    printf("TEMPO GASTO      = %10.2f h \n", tempo);
    printf("DISTANCIA        = %10.2f Km \n", distancia);
    printf("LITROS USADOS    = %10.2f litros \n", litros_usados);

    return (0);
}