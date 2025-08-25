// main.c

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main() {
    Calculadora *calc = criaCalculadora();
    int opcao;
    float a, b;

    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Ver ultimo resultado\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                soma(calc, a, b);
                printf("Resultado: %.2f\n", acessaUltimoResultado(calc));
                break;
            case 2:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                subtrai(calc, a, b);
                printf("Resultado: %.2f\n", acessaUltimoResultado(calc));
                break;
            case 3:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                multiplica(calc, a, b);
                printf("Resultado: %.2f\n", acessaUltimoResultado(calc));
                break;
            case 4:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                divide(calc, a, b);
                printf("Resultado: %.2f\n", acessaUltimoResultado(calc));
                break;
            case 5:
                printf("Ultimo resultado: %.2f\n", acessaUltimoResultado(calc));
                break;
            case 0:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    liberaCalculadora(calc);
    return 0;
}
