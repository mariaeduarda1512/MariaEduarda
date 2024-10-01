#include <stdio.h>

int main() {
    float valor;
    int contagem_positivos = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &valor);

        if (valor > 0) {
            contagem_positivos++;
        }
    }

    printf("%d valores positivos\n", contagem_positivos);

    return 0;
} 