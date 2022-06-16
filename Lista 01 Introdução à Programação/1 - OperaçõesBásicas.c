#include <stdio.h>

int 
main()

{
 
    // Ler dois valores inteiros (A e B) e efetuar as 4 operações básicas (adição, subtração, multiplicação e divisão).
    
	printf("Informe um número: ");
	float A;
	scanf("%f", &A);
 
	printf("\nInforme outro número: ");
	float B;
	scanf("%f", &B);
 
	printf("\nA soma dos números é: %-7.2f", (A + B));
	printf("\nA subtração dos números é: %-7.2f", (A - B));
	printf("\nA multiplicação dos números é: %-7.2f", (A * B));
	printf("\nA divisão dos números é: %-7.2f", (A / B));
	
}