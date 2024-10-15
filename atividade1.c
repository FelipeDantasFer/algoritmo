#include <stdio.h>

void calcularSoma() {
    // Declaração de variáveis locais
    int a = 5;
    int b = 10;
    int soma;

    // Cálculo da soma
    soma = a + b;

    // Impressão do resultado
    printf("A soma de %d e %d é %d\n", a, b, soma);
}

int main() {
    // Chamada da função que utiliza variáveis locais
    calcularSoma();

    return 0;
}