#include <stdio.h>

int main() {
    
    // Tamanho de um arquivo (em bits), bem como a velocidade da conexão (em bits por segundos), informar o tempo necessário do arquivo.
    
    float bits, bitsps, tempo;
    
    printf("Estimar tempo de download \n\n\n");
    printf("Qual é o tamanho do arquivo \n\n\n");
    scanf("%f", &bits);
    printf("Qual é a velocidade da sua conexão de internet? (em bits por segundos)\n");
    scanf("%f", &bitsps);
    
    tempo=bits/bitsps;
    
    printf("O tempo para terminar o seu download é %.0f segundos", tempo);
    
    return 0;
}