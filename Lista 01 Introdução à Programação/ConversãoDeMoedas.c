#include <stdio.h>

int 
main()

    // Conversão de moedas entre dólar e real. Valor do dolar (4.82).
    
{
    float valor, valorConvertido;
    int opcao;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\n1 - Converter de real para dolar\n2 - Converter de dolar para real\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:// Converter de real para dolar
        valorConvertido = valor / 4.82;
        printf("Valor convertido: $%.2f\n", valorConvertido);
        break;
    case 2:// Converter de dolar para real
        valorConvertido = valor * 4.82;
        printf("Valor convertido: R$%.2f\n", valorConvertido);
        break;
    default:
        printf("\nOpcao invalida!\n");
    }
    printf("Valor convertido: %.2f\n", valorConvertido);

}