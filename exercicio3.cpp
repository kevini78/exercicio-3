#include <stdio.h>

int main() {
    double A, B, C;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    double menor, meio, maior;

    if (A <= B && A <= C) {
        menor = A;
        if (B <= C) {
            meio = B;
            maior = C;
        } else {
            meio = C;
            maior = B;
        }
    } else if (B <= A && B <= C) {
        menor = B;
        if (A <= C) {
            meio = A;
            maior = C;
        } else {
            meio = C;
            maior = A;
        }
    } else {
        menor = C;
        if (A <= B) {
            meio = A;
            maior = B;
        } else {
            meio = B;
            maior = A;
        }
    }

    printf("Valores em ordem ascendente: %lf, %lf, %lf\n", menor, meio, maior);

    return 0;
}