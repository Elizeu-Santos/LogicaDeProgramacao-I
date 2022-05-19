#include <stdio.h>

int main() {
    
    int num, dobro;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    dobro = num * 2;
    
    printf("O dobro de %d = %d", num, dobro);
    
    return 0;
}