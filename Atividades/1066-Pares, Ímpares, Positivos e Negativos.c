#include <stdio.h>

int main() {
    int valor;
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}