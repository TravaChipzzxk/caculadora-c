#include <stdio.h>

#include "function_multiplicar.c"
#include "function_dividir.c"

int main() {

    int opcoes;
    int numero1;
    int numero2;
    int resultado;
    char continuar;

    do {

        printf("\nCALCULADORA RODOLFAO\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Divisao\n");
        printf("4 - Multiplicacao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcoes);

        if (opc >= 1 && opcoes <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%d", &numero1);

            printf("Digite o segundo numero: ");
            scanf("%d", &numero2);
        }

        switch (opcoes) {

            case 1:
                resultado = numero1 + numero2;
                printf("Resultado: %d\n", resultado);
                break;

            case 2:
                resultado = numero1 - numero2;
                printf("Resultado: %d\n", resultado);
                break;

            case 3:
                resultado = divida(numero1, numero2);
                printf("Resultado: %d\n", resultado);
                break;

            case 4:
                resultado = multiplique(numero1, numero2);
                printf("Resultado: %d\n", resultado);
                break;

            default:
                printf("Opcao indisponivel\n");
        }

        printf("\nDeseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Criado por Allyson Rodolfo (hhtps://github.com/TravaChipzzxk)\n");

    return 0;
}