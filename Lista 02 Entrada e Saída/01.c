#include <stdio.h>

int main(void)
{
    float troco, valor;
    do
    {
        int n = 0;    // Adicionando os valores das moedas 
        int n001 = 0;
        int n005 = 0;
        int n010 = 0;
        int n025 = 0;
        int n050 = 0;
        int n1   = 0;
        int n2   = 0;
        int n5   = 0;
        int n10  = 0;
        int n20  = 0;
        int n50  = 0;
        int n100 = 0;
        int acabou = 1;
        printf("------------------------------------------\n");
        printf("Digite o valor (zero (0) para sair): ");
        scanf("%f",&troco);
        valor = troco;
        if (valor >= 0.01)
        {
            while (acabou)
            {  
                if (troco >= 100)
                {
                    n100++;
                    troco = troco - 100.00;
                }
                else if (troco >= 50.00)
                {
                    n50++;
                    troco = troco - 50.00;
                }
                else if (troco >= 20.00)
                {
                    n20++;
                    troco = troco - 20.00;
                }
                else if (troco >= 10.00)
                {
                    n10++;
                    troco = troco - 10.00;
                }
                else if (troco >= 5.00)
                {
                    n5++;
                    troco = troco - 5.00;
                }
                else if (troco >= 2.00)
                {
                    n2++;
                    troco = troco - 2.00;
                }
                else if (troco >= 1.00)
                {
                    n1++;
                    troco = troco - 1.00;
                }
                else if (troco >= 0.50)
                {
                    n050++;
                    troco = troco - 0.50;
                }
                else if (troco >= 0.25)
                {
                    n025++;
                    troco = troco - 0.25;
                }
                else if (troco >= 0.10)
                {
                    n010++;
                    troco = troco - 0.10;
                }
                else if (troco >= 0.05)
                {
                    n005++;
                    troco = troco - 0.05;
                }
                else if (troco >= 0.01)
                {
                    n001++;
                    troco = troco - 0.01;
                }
                else acabou = 0;
                n++;
            }
            n--;
            printf("Numero de moedas: %d\n",n);
            printf("\n %d de 100\n %d de 50\n %d de 20\n %d de 10\n %d de 5\n %d de 2\n %d de 1\n",n100,n50,n20,n10,n5,n2,n1);
            printf(" %d de 0.50\n %d de 0.25\n %d de 0.10\n %d de 0.05\n %d de 0.01\n",n050,n025,n010,n005,n001);
        }
    }
    while (valor > 0.01);
}