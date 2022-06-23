#include <stdio.h>

int main(void)
{
  
  float nota1, nota2, nota3, media;   //Declaração das variáveis
  
  
  printf("Digite a primeira nota do aluno: ");   //Entrada de dados
  scanf("%f",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);
  
  printf("Digite a terceira nota do aluno: ");
  scanf("%f",&nota3);
  
 
  media = (nota1 + nota2 + nota3) / 3;    //Processamento
  
  
  printf("Media do aluno = %.1f\n",media);    //Saída

  
  return 0;   //retorno da função main
}