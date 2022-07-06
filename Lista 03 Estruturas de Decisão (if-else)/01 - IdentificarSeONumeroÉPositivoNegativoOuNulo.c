#include <stdio.h>

int main() 
{
    // ler um número e identificar se ele é positivo, negativo ou nulo.
    
    int num;
    
    printf("Digite um número qualquer: ");
    scanf("%d", &num);

    if(num == 0)
      printf("Nulo...");
    
      else if 
      (num > 0)
        printf("Positivo...");
     
     else
        printf("Negativo!");
        
        return 0;
}