/*
    DESAFIO:

    Crie um código que solicite um número N ao usuário
    e calcule a some dos N primeiros números naturais.

    exemplo: se o usuário digitar 5, o programa deve calcular 1 + 2 + 3 + 4 + 5 = 15
    Não utilize recursão, apenas loops.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Insira um valor: ");
    scanf("%d", &n);

    printf("Soma: %d\n", ((n) * (1 + n)) / 2);
}