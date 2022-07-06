#include <stdio.h>

int main() {
  long int a,b,c;
  int n,cont;
  double r;

  printf("Digite quantos termos da sequencia de Fibonacci voce deseja:\n");
  scanf("%d", &n);

  if (n <= 1) {
    printf("Numero invalido\n");
  }
  else {
    
    a = 1;
    b = 1;
    cont = 2;
    printf("\n\n1\n1\n");

    while(cont < n) {
        
      c = a + b;
      r = c;
      r = r/b;
      printf("%ld %.15lf\n", c, r);
      a = b;
      b = c;
      cont = cont + 1;
     
    }
  }
  return(0);
}