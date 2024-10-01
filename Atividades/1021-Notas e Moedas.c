#include <stdio.h>

int main() {
    double N;
    scanf("%lf", &N);

    int valor = (int)(N * 100 + 0.5); 
    
    int notas[6] = {10000, 5000, 2000, 1000, 500, 200}; 
    const char* nomesNotas[6] = {"R$ 100.00", "R$ 50.00", "R$ 20.00", "R$ 10.00", "R$ 5.00", "R$ 2.00"};

    
    int moedas[6] = {100, 50, 25, 10, 5, 1}; 
    const char* nomesMoedas[6] = {"R$ 1.00", "R$ 0.50", "R$ 0.25", "R$ 0.10", "R$ 0.05", "R$ 0.01"};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int quantidade = valor / notas[i];
        valor %= notas[i];
        printf("%d nota(s) de %s\n", quantidade, nomesNotas[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int quantidade = valor / moedas[i];
        valor %= moedas[i];
        printf("%d moeda(s) de %s\n", quantidade, nomesMoedas[i]);
    }

    return 0;
}