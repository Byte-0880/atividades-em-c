#include <stdio.h>

void decimalParaBinario(int n) {
    if (n > 1)
        decimalParaBinario(n / 2);
    printf("%d", n % 2);
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, insira um numero positivo.\n");
        return 1;
    }

    printf("Representacao binaria de %d: ", numero);
    decimalParaBinario(numero);
    printf("\n");

    return 0;
}
