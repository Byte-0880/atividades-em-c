#include <stdio.h>


int somaDigitos(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, insira um numero positivo.\n");
        return 1;
    }

    int resultado = somaDigitos(numero);
    printf("A soma dos digitos de %d eh: %d\n", numero, resultado);

    return 0;
}
