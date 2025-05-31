/*
    DESAFIO

    Crie um programa que:
    - peça ao usuário um número inteiro entre 1 e 10
    - salve esse número em uma variável
    - imprima sua tabuada de multiplicação até 10 usando um for
    - não digite nenhum número fixo no printf() da tabuada

    Dica: a ideia é usar o for para repetir um único printf(), 
    alterando seus valores a cada iteração através do uso de
    variáveis de controle como argumento
*/

#include <stdio.h>

int main() {
    // implementação:

    int n;
    printf("Insira um numero de 1 a 10: ");
    scanf("%d", &n);
    if(n < 1 || n > 10)  {
        printf("Valor invalido\n");
        return 0;
    }
       

    for(int i = 1; i <= 10; i++) 
        printf("Tabuada de %d (i = %d): %d\n", n, i, n*i);

    return 0;
}