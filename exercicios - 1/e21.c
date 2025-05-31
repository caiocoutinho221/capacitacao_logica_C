/*
    Complete o código para que imprima os 10 primeiros números pares usando um loop.
*/

#include <stdio.h>

int main() {
    printf("Os 10 primeiros números pares são:\n");
    // Implemente a lógica:
    for(int i = 0, par = 2; i < 10; i++, par+=2) {
        printf("%d\n", par);
    }
    return 0;
}